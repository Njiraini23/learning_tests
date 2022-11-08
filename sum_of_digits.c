#include <stdio.h>
unsigned int sumDigits(unsigned int num)
{
	if (num == 0)
		return (0);
	return ((num % 10) + sumDigits (num / 10));
}
int main()
{
	int num, sum; 

	printf("Enter any number to find sum of digits: ");
	scanf("%d", &num);

	sum = sumDigits(num);

	printf("Sum of digits of %d = %d\n", num, sum);
	return (0);

}


