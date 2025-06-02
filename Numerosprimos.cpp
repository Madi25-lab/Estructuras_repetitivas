#include <iostream>
using namespace std;

int main(){
	int C;
	int M=0;
	cout << "Bienvenido a mi programa" << endl;
	cout<< "Cantidad de multiplos de 7 que desee es: "<<endl;
	cin>> C;
	
	if (C>=1){
		cout <<"Los numeros son "<<endl;
		for (int i=0; i<=C-1; i++){
     	M=7*i; 
		cout << M <<endl;
		}
		}else {          
	cout<< "El numero debe ser positivo" <<endl;
    }
    
    cout << "¡Gracias por utilizar mi programa!" << endl;
	return 0;
}