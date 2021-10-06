#include "main.h"
/**
 * _puts - prints a string
 *
 * @str: the string to be printed
 *
 * Return: VOID
 **/


void _puts(char *str);

void _puts(char *str)
{
	int a = 0;  /*will be the character of the string*/
	int counter = 0; /*stops the printing at the end of the string*/

	while (counter <= a)
	{
		if (str[a] != '\0')
		{
			_putchar(str[a]);
			a++;
		}
		else
		{
			_putchar('\n');
			counter = a + 1;
		}
	}
}
