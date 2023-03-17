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

	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
