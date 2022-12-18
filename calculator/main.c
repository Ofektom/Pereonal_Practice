#include "calc.h"

/**
 * main - performs calculations
 * @first: first number provided
 * @second: second number provided
 * Return: 0 always
 */
int main(void)
{
	int i;
	int first, second;
	void (*func_ptr[])(int, int) = {add, subtract, multiply, divide, modulus};

	printf("Input the first number\n");
	scanf("%d", &first);
	printf("Input the operator:\n 0 for addition,\n 1 for suntraction,\n 2 for multiplication,\n 3 for division,\n 4 for modulus\n");
	scanf("%d", &i);
	printf("Input the second number\n");
	scanf("%d", &second);

	if (i > 4)
		return (0);
	(*func_ptr[i])(first, second);
	return (0);
}
