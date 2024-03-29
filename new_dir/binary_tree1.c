void insert(int data) 
{
	struct node *tempNode = (struct node*) malloc(sizeof(struct node));
	struct node *current;
	struct node *parent;

	tempNode->data = data;
	tempNode->leftChild = NULL;
	tempNode->rightChild = NULL;

	//if tree is empty, create root node
	if (root == NULL) 
	{
		root = tempNode;
	}
	else
	{
		current = root;
		parent = NULL;
		
		while(1)
		{
			parent = current;
			//go to left of the tree 
			if (data < parent->data)
			{
				current = current->leftChild;

				//insert to the left
				if (current == NULL)
				{
					parent->leftChild = tempNode;
					return;
				}
			}
			//go to the right of the tree
			else {
				current = current->rightChild;
				
				//insert to the right
				if (current == NULL)
				{
					parent->rightChild = tempNode;
					return;
				}
			}
		}
	}
}


