#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if ( argc != 4)
	{
		return (98);
	}

	int num1 = atio(argv[1]);
	char operator = argv[2][0];
	int num2 = atio(argv[3]);

	int result;

	switch (operator)
	{
		case '+':
			result = op_add(num1, num2)
			break;
		case '-':
			result = op_sub(num1, num2)
			break;
		case '*':
			result = op_mul(num1, num2)
			break;
		case '/':
			result = op_div(num1, num2)
			break;
		case '%':
			result = op_mod(num1, num2)
			break;
		default:
			return (99);
	}

	printf("%d\n", result);
	return (0);
}
