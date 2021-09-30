#include "main.h"
/**
* jack_bauer - every minute of a 24hour day
* @:
*
* Description: prints every minute in 24 hours in XX:XX format
*
* Return: VOID
*/
void jack_bauer(void);

void jack_bauer(void)
{
	int min = 0;
	int hr = 0;

	while (hr < 24)
	{
		while (min < 60)
		{
		int hfd = hr / 10;
		int hsd = hr % 10;
		int mfd = min / 10;
		int msd = min % 10;

		_putchar(hfd + '0');
		_putchar(hsd + '0');
		_putchar(':');
		_putchar(mfd + '0');
		_putchar(msd + '0');
		_putchar('\n');
		min++;
		}
		hr++;
		min = 0;
	}
}
