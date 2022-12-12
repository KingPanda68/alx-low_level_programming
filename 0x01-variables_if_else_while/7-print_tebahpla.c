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

	for (i = 122; i >= 97; i--)
		putchar(i);

	putchar(10);

	return (0);
}
