#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: 1 byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: 4 byte(S)\n", (unsigned long)sizeof(b));
printf("Size of a long int: 8 byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: 8 byte(S)\n", (unsigned long)sizeof(d));
printf("Size of a float: 4 byte(S)\n", (unsigned long)sizeof(f));
return (0);
}