#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{

	printf("$ ");

	size_t n = 20;
	char *buf = NULL;

	getline(&buf, &n, stdin);

	printf("%s", buf);
	free(buf);
	return(0);
}
