#include <iostream>
using namespace std;

	int main(){
		float descuento, compra , total;
		 
		 	cout<<"ingrese el monto  de tu compra: "<<endl;
		 	cin>>compra;
		 	
		 	if (compra > 500){
		 		descuento = compra * 0.05;
		 						total = compra - descuento;
			 }else if (compra > 200){
			 	descuento = compra * 0.02;
			 			 		total = compra - descuento;

			 }else if (compra > 100){
			 	descuento = compra * 0.01;
			 			 		total = compra - descuento;

			 }else{   
			 			 		total = compra ;
			 }
			 cout<<"el monto a pagar es: "<<total<<endl;
			 return 0;
		
	}