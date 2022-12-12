#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main- this is the entry point of the program
*
* Return: this returns a default value of 0
*/
int main(void)
{
	int n;
	int lad;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lad = n % 10;
	if (lad > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lad);
	}

	if (lad == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lad);
	}

	if (lad < 6 && lad != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lad);
	}
		return (0);
}
