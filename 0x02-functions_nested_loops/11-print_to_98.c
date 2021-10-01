#include "main.h"
/**
 * print_to_98 - prints given int then a sequence +1 .. +98
 * @n: starting point
 *
 * Description: a loop where n is increased by one and printed
 * Return: VOID
 */
void print_to_98(int n);
int print_sign(int n);

void print_to_98(int n)
{
	int fn;
	int mcn;
	int mn;
	int ln;
	int a;

	if (n == 98)
	{
		_putchar(9 + '0');
		_putchar(8 + '0');
	}
	else
	{
		if (n > 99)
		{
			fn = n / 100;
			mcn = n / 10;
			mn = mcn % 10;
			ln = n % 10;

			_putchar(fn + '0');
			_putchar(mn + '0');
			_putchar(ln + '0');
		}
		else if (n > 9)
		{
			fn = n / 10;
			ln = n % 10;

			_putchar(fn + '0');
			_putchar(ln + '0');
		}
		else if (n == 0)
		{
			_putchar('0');
		}
		else if (n < 0)
		{
			a = n * -1;
			_putchar('-');
			if (n > -10)
			{
				_putchar(a + '0');
			}
			else if (n < -99)
			{
				fn = a / 100;
				mcn = a / 10;
				mn = mcn % 10;
				ln = a % 10;

				_putchar(fn + '0');
				_putchar(mn + '0');
				_putchar(ln + '0');
			}
			else
			{
				fn = a / 10;
				ln = a % 10;

				_putchar(fn + '0');
				_putchar(ln + '0');
			}
		}
		else
		{
			_putchar(n);
		}
	}
	if (n < 98)
	{
		while (n < 98)
		{
			if (n > 9)
			{
				fn = n / 10;
				ln = n % 10;
				
				_putchar(',');
				_putchar(' ');
				_putchar(fn + '0');
				_putchar(ln + '0');
			}
			else if (n == 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0');
			}
			else if (n < 0)
			{
				a = n * -1;
				_putchar(',');
				_putchar(' ');
				_putchar('-');
				if (n > -10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(a + '0');
				}
				else if (n < -99)
				{
					fn = a / 100;
					mcn = a / 10;
					mn = mcn % 10;
					ln = a % 10;

					_putchar(',');
					_putchar(' ');
					_putchar(fn + '0');
					_putchar(mn + '0');
					_putchar(ln + '0');
				}
				else
				{
					fn = a / 10;
					ln = a % 10;
					
					_putchar(',');
					_putchar(' ');
					_putchar(fn + '0');
					_putchar(ln + '0');
				}
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(n);
			}
			n++;
		}
	}
	if (n > 98)
	{
		if (n > 99)
		{
			fn = n / 100;
			mcn = n / 10;
			mn = mcn % 10;
			ln = n % 10;

			_putchar(',');
			_putchar(' ');
			_putchar(fn + '0');
			_putchar(mn + '0');
			_putchar(ln + '0');
		}
		else
		{
			fn = n / 10;
			ln = n % 10;


			_putchar(',');
			_putchar(' ');
			_putchar(fn + '0');
			_putchar(ln + '0');
		}
		n--;
	}
}
