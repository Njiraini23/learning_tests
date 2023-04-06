#include <stdio.h>

int main()
{
	int character;
	printf("What is your name?");
	character = getchar();

	printf("Your name  is, %c\n", character);
	putchar(character);
	return 0;
}
