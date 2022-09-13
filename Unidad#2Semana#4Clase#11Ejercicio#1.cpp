#include <iostream>
using namespace std;

float calcularPerímetro(float); //Prototipo de función

int main(){
	double lado;
	cout << "Ingrese el lado del cuadrado " << endl; 
	cin >> lado;
	cout << "El perimetro del cuadrado es: " << calcularPerímetro(lado) ;
	return 0
	}	
	
	float calcularPerímetro(float lado){
		double perímetro = lado * 4;
	return perímetro;	
}
