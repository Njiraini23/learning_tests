#include <stdio.h>

int main() {
	int age;
	char name[50];

	printf("What is your name?\n");
	scanf("%s", name);
	printf("How old are you?\n");
	scanf("%d",&age);
	printf("%s is %d years old\n",name, age);

	return 0;
}
