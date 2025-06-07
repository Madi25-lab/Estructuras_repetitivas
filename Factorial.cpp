#include <iostream>
using namespace std;

int main (){
	int N;
	int i;
	long f; 
	char respuesta;
	cout<<"<<< BIENVENIDO >>>"<<endl;
	do{
		cout<<"Ingrese un numero para calcular su factorial: " <<endl;
		cin>>N;
		if(N>=1){
			f=1;
			for(int i=1; i<=N; i++){
				f=f*i;
			}
			cout<<"El factorial del numero: "<< N << " es " <<endl;
	        cout<<"            "<<f<<endl;
	        break;
		} else{
			cout<<"El numero debe ser positivo, desea volver a intentarlo? [Si(S)/No(N)]: ";
			cin>>respuesta;
			if (respuesta == 'N' || respuesta == 'n'){
				cout<<"FIN DEL PROGRAMA";
				break;
			}
		}
	} while(respuesta == 'S' || respuesta == 's');
	return 0;
}
