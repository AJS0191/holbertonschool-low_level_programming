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

	alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'q')
			alpha++;
		else if (alpha == 'e')
			alpha++;
		else
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
