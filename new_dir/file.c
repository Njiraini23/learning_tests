#include <stdio.h>

int main(void)
{
	const int MINE = 2;
	scanf("How many points did you lose?");

	if (points < MINE)
	{
		printf("You lost fewer points than me.\n");
	}
	else if (points > MINE)
	{
		printf("You lost more points than me.\n");
	}
	else
	{
		printf("We had same points");
	}
}
