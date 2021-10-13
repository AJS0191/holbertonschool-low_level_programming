#include "main.h"

char *firstvoid(char *s)
{
	char *s2;

	s2 = s;
	if (s[0] != '\0')
	{
		s2++;
		s = firstvoid(s2);
	}
	else
	{
		return (s);
	}
	return (s);
}
