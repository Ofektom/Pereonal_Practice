#include "calc.h"

/**
 * modulus - prints the remainder of  division of numbers
 */
void modulus(int divisor, int dividend)
{
if (dividend == 0)
	printf("Sorry, can't divide a number by zero(0)");
printf("%d modulus %d = %d\n", divisor, dividend, divisor % dividend);
}
