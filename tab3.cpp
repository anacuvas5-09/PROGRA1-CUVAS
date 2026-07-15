//elabore un programa de numeros pares e impares del 1 al 100 usando bucle for .n/2 par
#include <iostream>
using namespace std;
 
 		int main(){
 			int par = 0, impar = 0;
 			for (int i = 0; i<100; i++)
 			{
 				if (i % 2 == 0)
 				{
 					par += i;
			 }
			 else {
			 		impar += i;
			 }
		 }
		 cout<<"la sumnatoria  de pares son: "<<par<<endl;
		 cout<<"la sumnatoria  de impares son: "<<impar<<endl;
		return 0;
	}
 		