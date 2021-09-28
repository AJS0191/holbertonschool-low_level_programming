#include <stdio.h>
/**
 * main - entry point to program
 * VOID
 *
 * Description: Prints the alphabet backwards
 *
 *
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'z' ; alpha >= 'a' ; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
