#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	string names[] = {"Carter", "David"};
	string numbers[] = {"+254-705-375-144", "+254-705-285-185"}

	for (int i = 0; i < 2; i++)
	{
		if (strcmp(names[i], "David") == 0)
		{
			printf("Found %s\n", numbers[i]);
			return 0;
		}
	}
	printf("Not found\n");
	return 1;
}

