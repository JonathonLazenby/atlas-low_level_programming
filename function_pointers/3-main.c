#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char operator;

	if ( argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2][0];
	num2 = atoi(argv[3]);

	switch (operator)
	{
		case '+':
			result = op_add(num1, num2);
			break;
		case '-':
			result = op_sub(num1, num2);
			break;
		case '*':
			result = op_mul(num1, num2);
			break;
		case '/':
			result = op_div(num1, num2);
			break;
		case '%':
			result = op_mod(num1, num2);
			break;
		default:
			return (99);
	}

	printf("%d\n", result);
	return (0);
}
