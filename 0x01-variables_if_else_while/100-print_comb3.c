#include<stdio.h>

/**
 * main - print combos without repeats
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f = '0';
	int s = '0';

	while (f <= '9')
	{
		s = '0';
		while (s <= '9')
		{
			if (s == f)
			{
			}
			else if (f > s)
			{
			}
			else
			{
				putchar(f);
				putchar(s);
				if (s == '9' && f == '8')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			s++;
		}
		f++;
	}
	putchar('\n');
	return (0);
}
