#include <stdio.h>

/**
* main - entry point
*
* Description: Numberz
* @void:
*
* Return: returns zero after succesfull execution
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
