#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * return: 0
 */

int main(void)
{
	int day, month, year;

	day = 01;
	month = 4;
	year = 1997;

	print_remaining_days(month, day, year);

	return (0);
}
