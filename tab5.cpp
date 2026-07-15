#include <iostream>
using namespace std;

	int main(){
	     int numSecreto = 17;
	     int num;
    bool adivinado = false;   
    int numUsuario;
		    for (int intentos = 0; intentos < 4; intentos++) {
		    	cout<<"ingresa un numero: "<<endl;
		    	cin>>num;
		    	
			if(num == numSecreto){
				cout<<"--FELICIDADES,LO ADIVINASTE--"<<endl;
				adivinado = true ;
				break;
			}
			} 
			if (!adivinado){
				cout<<"--wow no lo adivinaste-sigue intentandolo--"<<endl;
			}
			return 0;
		}
