#include "main.h"
/**
 * cap_string -find each character after specific chars and capitalizes
 *
 * @s: string being modified and and returned
 *
 * Return: modified string s
 **/


char *cap_string(char *s)
{
	int x = 0;
	int y = 0;
	char sp[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '\"', '(',
		       ')', '{', '}'};
	char *ps = sp;

	if (s[x]  <= 121 && s[x] >= 97)
		s[x] =  s[x] - 32;
	for (x = 0; s[x] != '\0'; x++)
	{
		while (y < 13)
		{
			if (s[x] == ps[y])
			{
				if (s[x + 1] <= 121 && s[x + 1] >= 97)
				{
					s[x + 1] =  s[x + 1] - 32;
					y = 0;
					break;
				}
			}
			y++;
		}
		y = 0;
	}
	return (s);
}
