#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Retun: void
 */

void rev_string(char *s)
{
	char first, last;
	int i, max, half;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	max = i - 1;
	half = max / 2;

	while (half >= 0)
	{
		first = s[max - half];
		last = s[half];
		s[half] = first;
		s[max - half] = last;
		half--;
	}
}
