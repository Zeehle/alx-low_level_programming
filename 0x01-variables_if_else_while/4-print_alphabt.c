#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * main - Print the alphabet without q and e.
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int i;

	for (i = 95; i < 123; i++)
	{
		if (i != 101 && i != 133)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
