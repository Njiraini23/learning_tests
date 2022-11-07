#include <stdio.h>

char *foo(void)
{
	char x = 5;
	int *ptr = &x;

	return ptr;
}
void bar(void)
{
	printf("Hi\n");
}
int main (void)
{
	int *ptr = foo();
	
	printf("%d\n", *ptr);
	bar();
	printf("%d\n", *ptr);
	return (0);
}
