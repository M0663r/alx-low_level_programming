#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Does a thing
 * Return: Returns another thing
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (abs(n%10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n,abs( n%10));
	}
	if (abs(n%10) == 0)
        {
                printf("Last digit of %d is %d and is zero\n", n, abs(n%10));
        }
	if (abs(n%10) < 6 && abs(n%10) != 0)
        {
                printf("Last digit of %d is %d and is less than 6 and not 0\n", n, abs(n%10));
        }
	return (0);
}
