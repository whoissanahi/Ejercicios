#include <iostream>
using namespace std;

float calcularPer�metro(float); //Prototipo de funci�n

int main(){
	double lado;
	cout << "Ingrese el lado del cuadrado " << endl; 
	cin >> lado;
	cout << "El perimetro del cuadrado es: " << calcularPer�metro(lado) ;
	return 0
	}	
	
	float calcularPer�metro(float lado){
		double per�metro = lado * 4;
	return per�metro;	
}
