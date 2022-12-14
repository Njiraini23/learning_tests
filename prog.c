#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main (int argc, char *agrv[])
{
	int fd;
	char buf[14];

	/*write*/

	fd = open("myfile.txt", O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
	{
		printf("Failed to create and open the file.\n");
			exit(1);
	}

	write (fd, "Hello World!\n", 13); 
	close (fd);

	/* read */

	fd = open("myfile.txt", O_RDONLY);

	if (fd == -1)
         {
                 printf("Failed to open and read the file.\n");
		 exit(1);
	 }

	read(fd, buf, 13);
	buf[13] = '\0';

	close(fd);

	printf("buf: %s\n", buf);
	return 0:
}
