#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}

void print_diagonal(int n)
{
    if (n <= 0) {
        _putchar('\n');
        return;
    }

    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            _putchar(' ');
        }
        _putchar('\\');
        _putchar('\n');
    }
}

