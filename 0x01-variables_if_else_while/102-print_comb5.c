#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: write a program that prints all possible
 *		diffrent combinations of two digits
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int firstDigit = 0, secondDigit;

	while (firstDigit <= 99)
	{
		secondDigit = firstDigit;
		while (secondDigit <= 99)
		{
			if (secondDigit != firstDigit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ');
				putchar((seconfDigit / 10) + 48);
				putchar((secondDigit % 10) + 48);

				if (firstDigit != 99 || secondDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secondDigit++;
		}
		firstDigit++;
	}
	putchar('\n');

	return (0);

}
