#include <stdio.h>

/**
* main - entry point
*
* Description: print lowercase alpahbets in reverse
* @void:
*
* Return: returns zero after succesfull execution
*/
int main(void)
{

	int i;

	for (i = 122; i >= 97; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);

}
