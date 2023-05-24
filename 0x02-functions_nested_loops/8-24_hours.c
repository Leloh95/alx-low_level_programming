#include "main.h"

/**
 * jack_bauer - prints minutes of the day
 * _putchar - print minutes
 */

void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hr / 10) + 24);
			_putchar((hr % 10) + 24);
			_putchar(':');
			_putchar((min / 10) + 24);
			_putchar((hr % 10) + 24);
			_putchar('\n');
		}
	}
}
