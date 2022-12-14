#include "main.h"

/**
* print_alphabet_x10 - this is the entry point of the program
* Description: this function prints the alphabets in lowercase ten times
*/

void print_alphabet_x10(void)
{
	int alphabet;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);

			if (alphabet == 'z')
			{
				_putchar('\n');
																								}																				}
	}
}
