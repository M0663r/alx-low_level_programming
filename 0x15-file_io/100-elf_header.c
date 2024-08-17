#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_error - Prints an error message and exits with a status of 98
 * @msg: The error message to print
 */
void print_error(const char *msg)
{
    dprintf(STDERR_FILENO, "%s\n", msg);
    exit(98);
}


/**
 * print_elf_header_info - Prints the ELF header information
 * @ehdr: Pointer to the ELF header structure
 */
void print_elf_header_info(Elf64_Ehdr *ehdr)
{
    int i;

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x ", ehdr->e_ident[i]);
    }
    printf("\n");

    printf("  Class:                             ");
    switch (ehdr->e_ident[EI_CLASS])
    {
        case ELFCLASS32: printf("ELF32\n"); break;
        case ELFCLASS64: printf("ELF64\n"); break;
        default: printf("Invalid class\n"); break;
    }

    printf("  Data:                              ");
    switch (ehdr->e_ident[EI_DATA])
    {
        case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
        case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
        default: printf("Invalid data encoding\n"); break;
    }

    printf("  Version:                           %d (current)\n", ehdr->e_ident[EI_VERSION]);

    printf("  OS/ABI:                            ");
    switch (ehdr->e_ident[EI_OSABI])
    {
        case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
        case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
        case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
        default: printf("<unknown: %x>\n", ehdr->e_ident[EI_OSABI]); break;
    }

    printf("  ABI Version:                       %d\n", ehdr->e_ident[EI_ABIVERSION]);

    printf("  Type:                              ");
    switch (ehdr->e_type)
    {
        case ET_EXEC: printf("EXEC (Executable file)\n"); break;
        case ET_DYN: printf("DYN (Shared object file)\n"); break;
        default: printf("<unknown: %x>\n", ehdr->e_type); break;
    }

    printf("  Entry point address:               0x%lx\n", (unsigned long)ehdr->e_entry);
}


/**
 * main - Displays the information contained in the ELF header at the start of an ELF file
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * 
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
    int fd;
    ssize_t bytes_read;
    Elf64_Ehdr ehdr;

    if (argc != 2)
    {
        print_error("Usage: elf_header elf_filename");
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        print_error("Error: Can't read from file");
    }

    bytes_read = read(fd, &ehdr, sizeof(Elf64_Ehdr));
    if (bytes_read != sizeof(Elf64_Ehdr))
    {
        close(fd);
        print_error("Error: Can't read from file");
    }

    if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
        ehdr.e_ident[EI_MAG2] != ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3)
    {
        close(fd);
        print_error("Error: Not an ELF file");
    }

    print_elf_header_info(&ehdr);

    if (close(fd) == -1)
    {
        print_error("Error: Can't close fd");
    }

    return (0);
}
