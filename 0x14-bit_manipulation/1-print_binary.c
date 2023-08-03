/**
 * print_binary - prints binary representation of a number
 *
 * @n: unsigned long int to be converted
 */

void print_binary(unsigned long int n)
{
	int bits, highestBit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	bits = sizeof(unsigned long int) * 8;
	highestBit = 1 << (bits - 1);

	while (!(highestBit && n))
		highestBit >>= 1;

	while (highestBit)
	{
		_putchar((n & highestBit) ? '1' : '0');
		highestBit >>= 1;
	}
}
