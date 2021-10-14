#include "main.h"
/**
 * leet - takes a string and encodes it to 1337.
 *
 * @s: string to be encoded
 *
 * Return: the modified s string
 **/

char *leet(char *s)
{
	char checkl[6] = {'a', 'e', 'o', 't', 'l'};
	char checku[6] = {'A', 'E', 'O', 'T', 'L'};
	char le37[6] = {'4', '3', '0', '7', '1'};
	int y = 0;
	int x = 0;
	char *pl = checkl;
	char *pu = checku;
	char *p1337 = le37;

	while (y < 6)
	{
		if (s[x] == pl[y] || s[x] == pu[y])
		{
			s[x] = p1337[y];
			break;
		}
		y++;
	}
	y = 0;
	for (x = 1; s[x] != '\0'; x++)
	{
		while (y < 6)
		{
			if (s[x] == pl[y] || s[x] == pu[y])
			{
				s[x] = p1337[y];
				y = 0;
				break;
			}
			y++;
		}
		y = 0;
	}
	return (s);
}
