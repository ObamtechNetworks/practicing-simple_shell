#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
	printf("O_RDWR: %d\n", O_RDWR);//output: 2
	printf("O_RDONLY << 1: %d\n", O_RDONLY << 1);//output: 0
	printf("O_RDONLY: %d\n", O_RDONLY);//output: 0
	printf("2: %d\n", 2);//output: 2
	printf("0: %d\n", 0);//output: 0

	printf("O_RDONLY & O_WRONLY: %d\n", O_RDONLY & O_WRONLY);//output: 0
	printf("O_RDONLY + O_WRONLY: %d\n", O_RDONLY + O_WRONLY);//output: 1
	printf("(O_WRONLY << 1): %d\n", (O_WRONLY << 1));//output: 2
	printf("O_WRONLY: %d\n", O_WRONLY);//output: 1
	printf("3 & 2: %d\n", 3 & 2);//output: 2
	printf("3 | 2: %d\n", 3 | 2);//output: 3
	printf("(O_RDONLY && O_WRONLY): %d\n", (O_RDONLY && O_WRONLY));//output: 0
	printf("(O_RDONLY | O_WRONLY): %d\n", (O_RDONLY | O_WRONLY));//output: 1
	printf("1: %d\n", 1);//output: 1
	printf("1 << 1: %d\n", 1 << 1);//output: 2
	printf("3: %d\n", 3);//output: 3
}