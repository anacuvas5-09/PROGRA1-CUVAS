#include <iostream>
using namespace std;

	int suma (int a, int b){
		return a + b;
	}
	int resta (int c ,int d){
		return c - d;
	}
	float divi (float z, float y){
		return z / y;
	}
	int multi(int f, int g){
		return f * g;
	}
	int main(){
		int q,t;
		char opcion;
		do{
		
			cout<<"Inserte el primer numero: "<<endl;
			cin>>q;
			cout<<"Inserte el segundo numero: "<<endl;
			cin>>t;		
		cout<<"La suma es: "<<suma(q,t)<<endl;
		cout<<"La resta es: "<<resta(q,t)<<endl;
		cout<<"La division es: "<<divi(q,t)<<endl;
		cout<<"La multiplicacion es: "<<multi(q,t)<<endl;
			cout<<"ddeseas continuar?(s/n)"<<endl;
			cin>>opcion;
	}while(opcion != 'n'&& opcion != 'N');
	cout<<"-------------TERMINO EL PROGRAMA----------"<<endl;
		return 0;
	}
		