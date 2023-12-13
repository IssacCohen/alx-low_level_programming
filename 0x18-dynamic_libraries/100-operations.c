/**
 * add - sum
 * @a: num1
 * @b: num2
 *
 * Return: int
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - difference
 * @a: num1
 * @b: num2
 *
 * Return: int
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - product
 * @a: num1
 * @b: num2
 *
 * Return: int
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: num1
 * @b: num2
 *
 * Return: int
 */
int div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

/**
 * mod - remainder of the division
 * @a: num1
 * @b: num2
 *
 * Return: int
 */
int mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
