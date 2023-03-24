#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}

void print_triangle(int size)
{
    if (size <= 0) {
        _putchar('\n');
        return;
    }

    for (int i = 1; i <= size; i++) {
        for (int j = 0; j < i; j++) {
            _putchar('#');
        }
        _putchar('\n');
    }
}

