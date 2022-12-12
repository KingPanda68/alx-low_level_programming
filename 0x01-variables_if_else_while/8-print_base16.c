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
		putchar(i);

	for (i = 97; i <= 102; i++)
		putchar(i);

	putchar(10);

	return (0);
}
