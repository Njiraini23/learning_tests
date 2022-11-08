#include <stdio.h>
unsigned int factorial(unsigned int n)
{
	if (n <= 1)
		return 1; 
	return n * factorial(n - 1);
}
int main()
{
	int n = 12;
	printf("%d\n",factorial(n));
	return 0;
}
