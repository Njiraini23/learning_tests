#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next
}
node;

int main(void)
{
	//create a temp node of size Null
	node *temp = NULL;
	//allocate memory and initialize n 
	node *n = malloc(sizeof(node));
	if (node == NULL)
	{
		return 1;
	}
	n->data = 1;
	n->next = NULL;
	temp = n;
