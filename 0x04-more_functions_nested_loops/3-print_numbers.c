#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers();
    return (0);
}

void print_numbers(void)
{
    int i;

    for (i = 0; i < 10; i++) {
        _putchar(i + '0');
    }

    _putchar('\n');
}

