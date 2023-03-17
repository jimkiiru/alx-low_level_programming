#include <stdio.h>

/**
* main - entry point
*
* Description: alphabet in lowercase
* @void:
*
* Return: returns zero after succesfull execution
*/
int main(void)
{

	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}

	putchar('\n');

	return (0);
}
