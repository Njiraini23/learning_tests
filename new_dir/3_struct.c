#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
} 
node;

int main(void)
{
	//create a temp node of size Null
	node *temp = NULL;
	//allocate memory and initialize n 
	node *n = malloc(sizeof(node));

	if (n == NULL)
	{
		return 1;
	}
	n->data = 1;
	n->next = NULL;
	temp = n;
	//add another number to list
	n = malloc(sizeof(node));
	if (n == NULL)
	{
		return 1;
	}
	n->data = 2;
	n->next = NULL;
	temp->next = n;

	//add another  number
	n = malloc(sizeof(node));
	if (n == NULL)
	{
		free(temp->next);
		free(temp);
		return 1;
	}
	n->data = 3;
	n->next = NULL;
	temp->next->next = n;

	//to print numbers
	 for (node *tmp = temp; tmp != NULL; tmp->next)
	 {
		 printf("%i\n", tmp->data);
}
}

