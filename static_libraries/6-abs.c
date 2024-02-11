/**
 * _abs - compute the absolute value of an integer
 *
 * @nn: a number
 *
 * Return: the absolute value of the integer argument, of the
 *         appropriate integer type for the function.
 */

int _abs(int nn)
{
	if (nn >= 0)
		return (nn);
	else
		return (nn * -1);
}
