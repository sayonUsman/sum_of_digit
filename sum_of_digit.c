#include <stdio.h>

int main()
{
	int digit;
	
	int length;

	int remainder = 0;

	int sum = 0;

	int index = 1;
	
	printf("Please enter the length(maximum 9) of digit:\n");
	
	scanf("%d", &length);
	
	printf("Please enter the digit:\n");
	
	scanf("%d", &digit);	

	while (index <= length)
	{
		remainder = digit % 10;

		sum = sum + remainder;

		digit = digit / 10;

		index++;
	}

	printf("The sum of digit is %d\n", sum);

	return 0;
}
