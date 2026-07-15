#include <iostream>
using namespace std;
	//aqui estamos definiendo las variables 
		class Reloj
			private:
				int Hora;
				int Min;
				int Seg;
	//aqui estamos haciendo los constructores ,por defecto:
			public:
				Reloj(){
					Hora = 0;
					Min = 0;
					Seg = 0;
					}
	//aqui es por parametros:    , y el set usamos para validar y asigna los datos 	
				Reloj(int H;int M;int S){
					setHora(H);
					setMin(M);
					setSeg(S);
					}
	//aqui asignamos valores a las variables(setters) y dwevolvemos el valor actual(getters)
			    void setHora(int H) {
        			if (H >= 0 && H < 24) Hora = H;     //para que solo funcone entre 0 a 24 ,osea la hora
    				int getHora() 
					return Hora;
					}
				void setMin(int M){
					if (M >= 0 && M < 60) Min = M;     //para que solo funcine entre 0 a 60
    				int getMin() 
					return Min;
				}
				void setSeg(int S){
					if (S >= 0 && S < 60) Seg = S;     
    				int getSeg() 
					return Seg;
				}
	//aqui 	reinicia el relooj a cero 
				void PuestaCero(){
					Hora=0;
					Min=0;
					Seg=0;
				}	
	//aqui incrementamos usando if y void 
			    void incrementa() { //no devuelve valor y el if para acertar lo que me pide 
        			segundo++;
	        		if (Seg == 60) {
	            		Seg = 0;
	            			min++;
	            	if (Min == 60) {
	                	Min = 0;
	                		hora++;
	                if (Hora == 24) {
	                    Hora = 0;
						}
					}
				}
		}