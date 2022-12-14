#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
	char str[100];
	int fd = open("test.txt", O_RDONLY);
	
	read(fd, str, 13);
	write(fd, str, 13);
	
	return (0);
}
