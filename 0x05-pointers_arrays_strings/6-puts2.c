#include "main.h"
/**
 * puts2 - prints every other character of a string
 *
 * @str: the string to be printed
 *
 * Return: VOID
 **/


void puts2(char *str);

void puts2(char *str)
{
	int a = 0;  /*will be the character of the string*/
	int counter = 0; /*stops the printing at the end of the string*/

	while (counter <= a)
	{
		if (a == 0)
		{
			_putchar(str[a]);
			a++;
		}
		else if ((str[a] != '\0') && (a % 2 == 0))
		{
			_putchar(str[a]);
			a++;
		}
		else if (a % 2 != 0)
		{
			a++;
			continue;
		}
		else if (str[a] == '\0')
		{
			_putchar('\n');
			counter = a + 1;
		}
	}
}
