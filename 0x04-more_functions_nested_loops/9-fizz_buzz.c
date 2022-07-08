#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz -> printing to 100
 * Return: void
 */

void fizz_buzz(void)
{
	int x = 100;
	int i;

	i = 1;
	while (i <= x)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
		{
			if (i < x)
				printf("Buzz ");
			else
				print("Buzz");
		}
		else
		{
			printf("%i ", i);
		}
		i++;

	}
	printf("\n");
	return (0);
}

