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
	int j;
	int f_d;

	for (f_d = 48; f_d <= 55; f_d++)
	{
		for (i = 49; i <= 57; i++)
		{
			for (j = 50; j <= 57; j++)
			{
				if (j > i && i > f_d)
				putchar(f_d);
				putchar(i);
				putchar(j);
					if (i <= 56 && j <= 57 && f_d < 55)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
}

	putchar(10);

	return (0);
