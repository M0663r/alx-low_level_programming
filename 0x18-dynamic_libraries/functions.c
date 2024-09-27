#include "main.h"
#include <stdio.h>
#include <string.h>

int _putchar(char c) {
    return putchar(c);
}

int _islower(int c) {
    return (c >= 'a' && c <= 'z');
}

int _isalpha(int c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int _abs(int n) {
    return (n >= 0) ? n : -n;
}

int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c) {
    return (c >= '0' && c <= '9');
}

int _strlen(char *s) {
    int len = 0;
    while (*s++)
        len++;
    return len;
}

void _puts(char *s) {
    while (*s)
        _putchar(*s++);
    _putchar('\n');
}

char *_strcpy(char *dest, char *src) {
    char *start = dest;
    while ((*dest++ = *src++));
    return start;
}

int _atoi(char *s) {
    int res = 0, sign = 1, i = 0;
    if (s[0] == '-') {
        sign = -1;
        i++;
    }
    for (; s[i] != '\0'; i++) {
        res = res * 10 + s[i] - '0';
    }
    return res * sign;
}

char *_strcat(char *dest, char *src) {
    char *start = dest;
    while (*dest)
        dest++;
    while ((*dest++ = *src++));
    return start;
}

char *_strncat(char *dest, char *src, int n) {
    char *start = dest;
    while (*dest)
        dest++;
    while (n-- && (*dest++ = *src++));
    *dest = '\0';
    return start;
}

char *_strncpy(char *dest, char *src, int n) {
    char *start = dest;
    while (n-- && (*dest++ = *src++));
    while (n-- > 0)
        *dest++ = '\0';
    return start;
}

int _strcmp(char *s1, char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

char *_memset(char *s, char b, unsigned int n) {
    char *start = s;
    while (n--)
        *s++ = b;
    return start;
}

char *_memcpy(char *dest, char *src, unsigned int n) {
    char *start = dest;
    while (n--)
        *dest++ = *src++;
    return start;
}

char *_strchr(char *s, char c) {
    while (*s) {
        if (*s == c)
            return s;
        s++;
    }
    return NULL;
}

unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    while (*s && strchr(accept, *s++))
        count++;
    return count;
}

char *_strpbrk(char *s, char *accept) {
    while (*s) {
        if (strchr(accept, *s))
            return s;
        s++;
    }
    return NULL;
}

char *_strstr(char *haystack, char *needle) {
    char *p1, *p2;
    while (*haystack) {
        p1 = haystack;
        p2 = needle;
        while (*p1 && *p2 && (*p1 == *p2)) {
            p1++;
            p2++;
        }
        if (!*p2)
            return haystack;
        haystack++;
    }
    return NULL;
}
