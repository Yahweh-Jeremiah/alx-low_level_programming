#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        int intType;
        float floatType;
        char charType;
        long int longintType;
        long long int longlongintType;

        printf(stderr, "size of a char: %d bytes(s)\n", sizeof(charType));
        printf(stderr, "size of a int: %d bytes(s)\n", sizeof(intType));
        printf(stderr, "size of a long int: %d bytes(s)\n", sizeof(longintType));
        printf(stderr, "size of a long long int: %d bytes(s)\n", sizeof(longlongintType));
        printf(stderr, "size of a float: %d bytes(s)\n", sizeof(floatType));

	return (0);
}
