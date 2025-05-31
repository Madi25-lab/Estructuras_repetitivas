#include <iostream>
using namespace std;

int main (){
	int N;
	int f=1, i=1; 
	bool repetir = true;
	cout<<"BIENVENIDO"<<endl;
	cout<<"Ingrese un numero: " <<endl;
	cin>>N;
	if (N>=1){
	while (i<=N){
        f=f*i;
        i++;
	}
}
else{ 
cout << "Vuelve a intentarlo (S/N): ";
        char respuesta;
        cin >> respuesta;

        if (respuesta == 'N' || respuesta == 'n') {
            repetir = false;
        }
        cout<<"Ingrese un numero: " <<endl;
	cin>>N;
	if (N>=1){
	while (i<=N){
        f=f*i;
        i++;
	}
}
    }
	cout<<"El factorial del numero: "<< N << " es " <<endl;
	cout<<f<<endl;
	return 0;
}