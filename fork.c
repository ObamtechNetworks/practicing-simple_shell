#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
	pid_t pid = fork();
	printf("Before fork, i was one");

	// fork();

	if (pid == (-1))
	{
		perror("unsuccessful");
		return (1);
	}

	printf("After fork, i became two");

	return (0);
}