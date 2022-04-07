// Autore: Alessandro Rossi & Michele improta & Giovanni Ammirati

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Responsabile Giovanni Ammirati
int main() {
	int n, a;
	cout<<"Scegli quanti bit inserire (da 8 a 32): "; 
	cin>>n;
	while(n<8 || n>32) {
		cout<<"Inserisci un numero tra 8 e 32";
		cin>>n;
	}
	int bit[n];
	cout<<"Numero di bit: "<<n<<endl;
	for (int i=0; i<n; i++) {
		int a = rand() % 2;
		bit[i] = a;
	}
	
	//Responsabile Alessandro Rossi 
	cout<<"\nSequenza di bit generati: ";
	for (int i=0; i<n; i++) {
	cout<<bit[i];
	}
	int m=4;
	int gx[m];
	gx[0]=1;
	gx[1]=1;
	gx[2]=0;
	gx[3]=1;
	cout<<"\n\nmx: ";
	
	//Respoinsabile Michele Improta
	for (int i=m; i>0; i--) {
		if (gx[i-1]==1){
			cout<<"x^"<<i-1<<"+";
		}
	}
	for (int i=0, h=m; i<n; i++, h--) {
		if(h==0){
			h=4;
		}
		if (bit[i] == gx[h]) {
			bit[i] = 0;
		}
	}
}
