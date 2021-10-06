#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 * RETURN: Void
 **/

void rev_string(char *s)
{
	int a = 0;
	int counter = 0;
	int b;
	int c = 0;
	char rts[500] = "";

	while (counter <= a)
	{
		if (s[a] != '\0')
		{
			a++;
		}
		else if (s[a] == '\0')
		{
			a--;
			b = a;
			counter = a + 2;
		}
	}
	counter = b;

	while (counter >= b)
	{
		if (b >= 0)
		{
			rts[c] = s[b];
			b--;
			c++;
		}
		else
		{
			rts[c] = '\0';
			counter = b - 1;
			*s = rts;
		}
	}
}
