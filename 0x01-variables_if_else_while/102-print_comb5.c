#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *  * main- this is the entry point of the program
 *   *
 *    * Return: this returns a default value of 0
 *     */
int main(void)
{
		int i;
			int j;

				for (i = 0; i <= 98; i++)
						{
									for (j = i + 1; j <= 99; j++)
												{
																putchar((i / 10) + 48);
																			putchar((i % 10) + 48);
																						putchar(' ');
																									putchar((j / 10) + 48);
																												putchar((j % 10) + 48);

																															if (i == 98 && j == 99)
																																			continue;

																																		putchar(44);
																																					putchar(32);
																																							}
										}

					putchar(10);

						return (0);
}
