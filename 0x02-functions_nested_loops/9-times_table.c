#include "main.h"
/**
* times_table - prints times table up to 9x9
* @: VOID
*
* Description: prints times table up to 9x9
*
* Return: VOID
*/
void times_table(void);

void times_table(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int c1 = 0;
	int c2 = 0;

	while (a <= 9)
	{
		while (b <= 9)
		{
			if (b == 0)
			{
				c = a * b;
				_putchar(c + '0');
				_putchar(',');
			}
			else if (b != 9)
			{
				c = a * b;
				if (c < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
					_putchar(',');
				}
				else
				{
					c1 = c / 10;
					c2 = c % 10;

					_putchar(' ');
					_putchar(c1 + '0');
					_putchar(c2 + '0');
					_putchar(',');
				}
			}
			else
			{
				c = a * b;
				if (c < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				}
				else
				{
					c1 = c / 10;
					c2 = c % 10;

					_putchar(' ');
					_putchar(c1 + '0');
					_putchar(c2 + '0');
				}
			}
			b++;
		}
		a++;
		b = 0;
		_putchar('\n');
	}
}

