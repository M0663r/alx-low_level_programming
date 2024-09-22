#include <stdio.h>

int is_palindrome(int num) {
    int reversed = 0, original = num;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return original == reversed;
}

int main(void) {
    int max_palindrome = 0;
    int i, j, product;
    FILE *file;

    for (i = 100; i < 1000; i++) {
        for (j = 100; j < 1000; j++) {
            product = i * j;
            if (is_palindrome(product) && product > max_palindrome) {
                max_palindrome = product;
            }
        }
    }

    file = fopen("102-result", "w");
    if (file != NULL) {
        fprintf(file, "%d", max_palindrome);
        fclose(file);
    }

    return 0;
}
