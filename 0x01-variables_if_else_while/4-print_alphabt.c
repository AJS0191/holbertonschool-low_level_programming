#include <stdio.h>
/**
 * main - entry point to program
 * VOID
 *
 * Description: Gives a random number than evalutes the last digit and prints
 * results
 *
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		if (alpha == 'e')
			continue;
		if (alpha == 'q')
			continue;
		else
			putchar(alpha);
	}
	putchar('\n');
	return (0);
}
