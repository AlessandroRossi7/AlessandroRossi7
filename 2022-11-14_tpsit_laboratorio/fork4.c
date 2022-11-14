#include <stdio.h>
#include <stdlib.h>

int main(){
	int pid1, pid2, pid3;
	pid1 = fork();										//creo processo figlio
	pid2 = fork();										//creo processo figlio
	pid3 = fork();										//creo processo figlio
	if ((pid1 == 0)) || (pid2 == 0) || (pid3 == 0) {	// se uno è 0 è un figlio
		
		printf("sono il processo figlio con pid:%d.", getpid());
		printf("il mio papi ha pid:%d/n", getppid());
		sleep(1);
		exit(2);
	}
	else{
		sleep(2);
	printf("sono il processo padre con pid:%d. /n", getpid());
	}
	return 0;
}
