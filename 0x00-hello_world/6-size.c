#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

        print("Size of a char: %lu bytes(s)\n", (unsigned long) sizeof(d));
       	print("Size of a int: %lu bytes(s)\n", (unsigned long) sizeof(a));
	print("Size of a long: %lu bytes(s)\n", (unsigned long) sizeof(b));
        print("Size of a long: %lu bytes(s)\n", (unsigned long) sizeof(c));
	print("Size of a long: %lu bytes(s)\n", (unsigned long) sizeof(f));

	return (0);
}

