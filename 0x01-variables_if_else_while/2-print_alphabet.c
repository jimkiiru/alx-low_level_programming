#include <stdio.h>

/**
* main - entry point
*
* Description: print alpahbets in lowercase
* @void:
*
* Return: returns zero after succesfull execution
*/
int main(void)
{

	int i;
	for(i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return 0;

}
