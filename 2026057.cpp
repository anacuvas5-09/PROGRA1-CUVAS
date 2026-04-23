#include <iostream>
using namespace std;

	int main(){
		int a,b,c;
		cout<<"ingrese un lado del triangulo: "<<endl;
		cin>>a;
		cout<<"ingrese el segundo lado: "<<endl;
		cin>>b;
		cout<<"ingrese el tercer lado: "<<endl;
		cin>>c;
	

    if (a + b > c && a + c > b && b + c > a) {

        if (a == b && b == c) {
            cout << "Es un triangulo EQUILATERO" << endl;
        }
        else if (a == b || a == c || b == c) {
            cout << "Es un triangulo ISOSCELES" << endl;
        }else {
            cout << "Es un triangulo ESCALENO" << endl;
    }
	} else{
        cout << "No es ningun tipo de triangulo" << endl;
}

    return 0;

}