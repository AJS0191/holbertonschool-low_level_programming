#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints second half of a string
 *
 * @str: the string to be printed
 *
 * Return: VOID
 **/


void puts_half(char *str);

void puts_half(char *str)
{
	int a = 0;  /*will be the character of the string*/
	int counter = 0; /*stops the printing at the end of the string*/

	counter = _strlen(str);
	a = counter / 2;
	if ((a % 2 == 0) && (a != 0))
		a++;
	while (a <= counter)
	{
		if (str[a] != '\0')
		{
			_putchar(str[a]);
			a++;
		}
		else
		{
			_putchar('\n');
			a = counter + 1;
		}
	}
}
