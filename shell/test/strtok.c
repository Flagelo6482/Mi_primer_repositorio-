#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	size_t a = ac;
	char *buf = NULL;
	char *delim = " ";
	char *token;

	//Vista del pront
	printf("$ ");
	//Leo el teclado
	getline(&buf, &a, stdin);
	//Divido los argumentos en token
	token = strtok(buf, delim);

	while(token)
	{
		printf("Token: %s\n", token);
		token = strtok(NULL, delim);
	}

        free(buf);
        return(0);

}
