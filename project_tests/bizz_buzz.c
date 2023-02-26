#include <stdio.h>

int main(void)
{
	int i;

	for (i > 0; i < 100; i++)
	{
		if (i % 3 == 0 & i % 5 == 0)
			printf("BizzBuzz\n");
		else if (i % 3 == 0)
			printf("Bizz\n");
		else if (i % 5 == 0)
			printf("Buzz\n");
		else 
			printf("%d\t\n", i);
	}
	return 0;
			
}
