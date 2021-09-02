#include <stdio.h>

/**
 * main - print 1-100 but replace some numbers with words
 * none
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("%s ", "FizzBuzz");
		else if ((i % 5) == 0)
			printf("%s ", "Buzz");
		else if ((i % 3) == 0)
			printf("%s ", "Fizz");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}