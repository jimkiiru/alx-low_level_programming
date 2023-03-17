#include <stdio.h>

/**
* main - entry point
*
* Description: combinations of single-digit numbers
* @void:
*
* Return: returns zero after succesfull execution
*/
int main(void)
{

	int i = 0, j = 0, k = 0, l = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
			for (k = j + 1; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				putchar(',');
				putchar(' ');
				for (l = k + 1; l < 10; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					putchar(l + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return 0;
}
