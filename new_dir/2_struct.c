#include <stdio.h>
#include <stdlib.h>

//Create strucct node a global variable
typedef struct node
{
	int number;
	struct node *next;
}
node;

int main void
{
	node *temp = NULL;

	node *n = malloc(sizeof(node));
	if (n == NULL)
	{
		return 1;
	}
	n->number = 1;
	n->next = NULL;
	temp = n;
