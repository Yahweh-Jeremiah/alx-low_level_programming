#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char chartype;
	int inttype;
	long int longinttype;
	float floattype

	printf(stderr, "Size of a char: %d\n", sizeof(chartype));
	printf(stderr, "Size of a int: %d\n", sizeof(inttype));
	printf(stderr, "Size of a long int: %d\n", sizeof(longinttype));
	printf(stderr, "Size of a long long int: %d\n", sizeof(longlonginttype));
	printf(stderr, "Size of a float: %d\n", sizeof(floattype));

	return (0);
}
