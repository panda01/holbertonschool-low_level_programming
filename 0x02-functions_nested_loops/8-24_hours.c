#include "holberton.h"


/**
 * jack_bauer - Prints all the minutes in a day
 *
 */

void jack_bauer(void)
{
	int minutes;
	int tensMinutes;
	int hours;
	int tensHours;


	for (tensHours = '0'; tensHours <= '2'; tensHours++)
	{
		for (hours = '0'; hours <= '9'; hours++)
		{
			if (tensHours == '2' && hours == '4')
			{
				break; /* Lets leave the loop */
			}
			for (tensMinutes = '0'; tensMinutes <= '5'; tensMinutes++)
			{
				for (minutes = '0'; minutes <= '9'; minutes++)
				{
					_putchar(tensHours);
					_putchar(hours);
					_putchar(':');
					_putchar(tensMinutes);
					_putchar(minutes);
					_putchar('\n');
				}
			}
		}
	}
}
