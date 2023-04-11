#include <stdio.h>
#include <stdlib.h>

typedef struct *node 
{
	int number;
	struct node *next;
}
node;

int main(void)
{
	//list of size Null
	node *list = NULL;
	//add number to list
	node *n = malloc(sizeof(node));
	if (n == NULL)
	{
		return 1;
	}
	n->number = 1;
	n->next = NULL;
	//update list to point to new node
	list = n;
}
