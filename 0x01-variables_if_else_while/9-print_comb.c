#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main- this is the entry point of the program
*
* Return: this returns a default value of 0
*/
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);

		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar(10);

	return (0);
}
