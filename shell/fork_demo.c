#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t pid;

	pid = fork();

	if (pid == -1)
	{
		perror("Error\n");
		return (1);
	}

	if (pid == 0)
	{
		sleep(5);
		printf("Soy el niño\n");
	}
	else
	{
		printf("Soy el padre\n");
	}

	return(0);
}
