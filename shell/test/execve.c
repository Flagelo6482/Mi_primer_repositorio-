#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

	printf("Ejecutando\n");

	if(execve(argv[0], av, NULL) == -1)
	{
		perror("Error\n");
	}

	printf("Despues de la ejecucion\n");

	return(0);
}
