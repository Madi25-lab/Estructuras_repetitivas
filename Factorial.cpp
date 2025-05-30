#include <iostream>
using namespace std;

int main (){
	int N;
	int f=1, i=1;
	cout<<Ingrese un numero:  <<endl;
	cin>>N;
	while (i<=N){
        f=f*i;
        i++;
	}
	cout<<El factorial del numero: <<f<<endl;	
	return 0;
}
