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

/**
 * Whether in word
 * or in code
 * do all in The NAme Of Jesus
 * giving Thamks to GOD THE FATHER
 * through Him
 */
        printf("size of a char: %d bytes(s)\n", sizeof(charType));
        printf("size of a int: %d bytes(s)\n", sizeof(intType));
        printf("size of a long int: %d bytes(s)\n", sizeof(longintType));
        printf("size of a long long int: %d bytes(s)\n", sizeof(longlongintType));
        printf("size of a float: %d bytes(s)\n", sizeof(floatType));

	return (0);
}
