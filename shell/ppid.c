#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t ppid;

	ppid = getppid();

	printf("Mi PPID(Identificador de proceso principal) es %u\n", ppid);

	return(0);
}
