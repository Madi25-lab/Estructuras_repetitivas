#include <iostream>
using namespace std;

int main(){
	int C;
	int M=0;
	int i=1;
	cout << "¡Bienvenido a mi programa!" << endl;
    cout << "Estoy listo para ayudarte " << endl;
	cout<< "Cantidad de multiplos de 7 que desee es: "<<endl;
	cin>> C;
	if (C>=1){
		cout << "Los numeros son: "<< endl;
	while (i<=C){
		M=M+7;
		   cout <<" - " <<M <<endl;
		   i++;
	}
    }else {
	cout<< "El numero debe ser positivo" <<endl;
    }
    
    cout << "¡Gracias por utilizar mi programa!" << endl;
	return 0;
}
