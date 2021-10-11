#include "main.h"
/**
 * _strspn - takes a string and return its length
 *
 * @s: first string compared
 * @accept: second string compared
 *
 * Return: returns where s and accept differ
 **/

unsigned int _strspn(char *s, char *accept);

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c = 0;
	int d = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
			else
				c = 0;
		}
		if (c == 0)
			break;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				d++;
				break;
			}
		}
	}
	return (d);
}
