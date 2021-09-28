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
	char BETA;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		putchar(alpha);
	}
	for (BETA = 'A' ; BETA <= 'Z' ; BETA++)
	{
		putchar(BETA);
	}
	putchar('\n');
	return (0);
}
