//programa que solicite al usuario hasta que el usuario solicite salir + - * / salir
#include<iostream>
using namespace std;
int main(){

		char opcion;
		float a,b,suma,resta,division,multiplicacion;
		
		do{
		
			cout<<"Escriba primer numero: "<<endl;
			cin>>a;
			cout<<"Escriba segundo numero: "<<endl;
			cin>>b;	
		suma= a+b;
		resta= a-b;
		division= a/b;
		multiplicacion= a * b;
			cout<<"-------------------------\n"<<endl;
			cout<<"la suma es: "<<suma<<endl;
			cout<<"la resta es: "<<resta<<endl;
			cout<<"la division es: "<<division<<endl;
			cout<<"la multiplicacion es: "<<multiplicacion<<endl;
			cout<<"-------------------------\n"<<endl;
			
			cout<<"____Deseas continuar?____ (s/n)"<<endl;
			cin>>opcion;
		}while(opcion!='n');
			cout<<"---------operacion terminada---------"<<endl;
		}