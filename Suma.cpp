#include <iostream>
using namespace std;

int main(){
	int C;
	int S=0;
	int i=1;
	cout<<"La cantidad de numeros es: ";
	cin>> C;
	if (C>=1){
	while (i<=C){
		S=S+i;
		i=i+1;
	}
}
	cout<< "La suma es: "<< S <<endl;
	return 0;
}
