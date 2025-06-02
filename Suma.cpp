#include <iostream>
using namespace std;

int suma(int C) {
int i=1;
int S=0;
if (C>=1){
	for (int i=1;i<=C;i++){
	S=S+i;	
	}
}
return S;
}


int main(){
	int C, S;
	cout<<"Bienvenido a mi programa "<<endl;
	cout<<"La cantidad de numeros es: ";
	cin>> C;
	S=suma(C);
	cout<< "La suma es: "<< S <<endl;
	cout<<"Gracias ";
	return 0;
}
