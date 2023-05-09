#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	fork();
	printf("Buenos dias\n Mi PID es: %d\n", getpid());

	return(0);
}
