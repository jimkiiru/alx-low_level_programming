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

	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
		putchar(',');
		putchar(' ');
		for (j = i+1; j < 10; j++)
		{
			putchar(i + 48);
			putchar(j + 48);
			putchar(',');
			putchar(' ');
			for (k = j+1; k < 10; k++)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);
				putchar(',');
				putchar(' ');
				for (l = k+1; l < 10; l++)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(k + 48);
					putchar(l + 48);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
