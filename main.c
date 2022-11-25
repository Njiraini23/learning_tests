#include <stdio.h>
#include <stdlib.h>
#include "main.h"


int main(void)
{
	node *head;
	node one;
	node two;

	one.data = 4;
	two.data = 6;

	head = &one;
	one.next = &two;

	printf("%d\n", head->data);
	printf("%d\n",head->next->data);
	return 0;
}
