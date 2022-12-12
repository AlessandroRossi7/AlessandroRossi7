#include<stdio.h>
#include<stdlib.h>

int main() {
	int pid1, pid2, pid3;
	pid1 = fork();
	pid2 = fork();
	pid3 = fork();
	if ((pid1 == 0) || (pid2 == 0) || (pid3 == 0)) {
		printf("Sono il processo figlio con pid:%d.", getpid());
		printf("Mio padre ha pid:%d\n", getpid());
		sleep(1);
		exit(1);
	} else {
	    sleep(2);
	    printf("Sono il process padre con pid:%d. \n", getpid());
	}
	return 0;
}
