#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	size_t a = ac;
	char *buf = NULL;

	printf("$ ");

	getline(&buf, &a, stdin);

	printf("%s", buf);

	free(buf);
	return(0);
}
