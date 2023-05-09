#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int ac, char **av)
{
	pid_t my_pid;//Variable para guardar el ID de un proceso
	char *buf = NULL;//Bufer para leerlo en el getline
	size_t cou = ac;//Igualar la cantidad de argumentos
	char *delim = " ";//Delimitador
	char *token;//Token para separar los argumentos pasados por el programa


	my_pid = getpid();//Almacenar el ID del proceso actual

	printf("%u\n", my_pid);//Mostar mi ID

	printf("$ ");//Vista de nuestro promt

	getline(&buf, &cou, stdin);//Lectura de nustro teclado

	token = strtok(buf, delim);//Separamos los argumentos con la funcion

	while(token)
	{
		printf("%s\n", token);//Imprimimos cada argumento
		token = strtok(NULL, delim);//Pasamos al siguiente argumento
	}

	free(buf);
	return(0);
}
