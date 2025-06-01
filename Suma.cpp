#include <iostream>
using namespace std;

int suma(int C) {
int i=1;
int S=0;
if (C>=1){
	while (i<=C){
		S=S+i;
		i=i+1;
	}
}
return S;
}



int main(){
	int C, S;
	cout<<"La cantidad de numeros es: ";
	cin>> C;
	S=suma(C);
	cout<< "La suma es: "<< S <<endl;
	return 0;
}
