#include "main.h"
#include "2-strlen.c"
/**
 * _strstr - finds exact match in 2 string
 *
 * @haystack: string being examined
 * @needle: string being compared against
 *
 * Return: returns the location of full match
 **/
char *_strstr(char *haystack, char *needle);

char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;
	int c = _strlen(haystack);
	int d = _strlen(needle);
	char *e;
	char **find;

	if (d <= 1)
	{
		while (a < c)
		{
			if (haystack[a] == needle[b])
			{
				e = &haystack[a];
				find = &e;
				a++;
				b++;
				while (b < d)
				{
					if (haystack[a] == needle[b])
					{
						a++;
						b++;
					}
					else
					{
						b = 0;
						break;
					}
				}
				if (b == d)
				{
					return (*find);
				}
			}
			a++;
		}
		e = '\0';
		find = &e;
		return (*find);
	}
}
else
{
	return(haystack);
}
