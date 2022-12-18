#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int wstatus;
	pid_t pid;

	printf("Before fork\n");
	pid = fork();
	if (pid == 0)
	{
		printf("I am hild process with ID = %d\n", getpid());
		printf("I have a parent with ID = %d\n", getppid());
	} else
	{
		wait(&wstatus);
		printf("%d\n", WIFEXITED(wstatus));
		printf("I am parent process with ID = %d\n", getpid());
		printf("I have a child with ID = %d\n\n", pid);
	}
	return (0);
}
