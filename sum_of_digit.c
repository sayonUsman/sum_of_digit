#include <stdio.h>

int main()
{
	int number = 123456;

	int remainder = 0;

	int sum = 0;

	int index = 1;

	while (index <= 6)
	{
		remainder = number % 10;

		sum = sum + remainder;

		number = number / 10;

		index++;
	}

	printf("The sum of digit is %d\n", sum);

	return 0;
}
