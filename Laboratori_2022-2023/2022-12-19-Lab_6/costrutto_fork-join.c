#include <stdio.h>
#include <stdlib.h>

int calcoli_figlio1(){
	int k;
	printf("1.1 elab. parallela processo figlio \n");
	k = 3 + 2;
	return k;
}


int calcoli_padre1(){
	int k;
	printf("1 elab. parallela padre \n");
	k = 6 - 2;
	return k;
}

int calcoli_padre2(int a, int b){
	int k;
	printf("2 elab. finale padre \n");
	k = (a + b);
	return k
}


int wait(ret_value);
int WEITSTATUS(ret_value);

int main(){
	int x, y, z, retv;
	pid_t pid;
	pid = fork();
	if (pid == 0){
		x = calcoli_figlio();
		exit(x);
	}
	else{
		y = calcoli_padre2();
		exit(y);
	}
	printf("..join: padre aspetta \n");
	wait(&retv);
	x = WEXITSTATUS(retv);
	z = calcoli_padre(x, y);
	printf("-> risultato finale z = %d \n", z);
	}

