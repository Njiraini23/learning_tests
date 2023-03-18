#include<stdio.h>
/**
* main - To print the alphabet numbers
*
*Return:0
*/
int main(void)

{
	char  letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
