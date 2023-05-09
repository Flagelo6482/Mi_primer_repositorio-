#include "main.h"

int main(int ac, char **av)
{
	char *promp = "$ ";
	char *copy = NULL;
	char *ptr = NULL;

	const char *delim = " \n";

	size_t n = 0;
	ssize_t read;

	/*Declarar las variables void*/
	(void)ac; (void)av;

	while (1)
	{
		printf("%s", promp);
		read = getline(&ptr, &n, stdin);

		if (read == -1)
		{
			printf("Exiting shel...\n");
			return (-1);
		}

		printf("%s", ptr);

		free(ptr);
	}

	return (0);
}
