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

	a = _strlen(str);
	counter = a;
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
