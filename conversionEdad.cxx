//Dicen que 1 año de humano equivale a 7 años de perro. Vamos a hacer un programa que convierta tu edad a años perrunos.
//​Lo que necesitas:
//​La constante: El número 7.
//​La entrada: Tu edad (un número entero).
//​El cálculo: Tu edad multiplicado por 7.

#include <iostream>
using namespace std;

int main() {
	const int MULTIPLICADOR = 7;
	int edad;
	
	cout << "Ingresa tu edad: ";
	cin >> edad;
	
	edad = edad * MULTIPLICADOR;
	
	cout << "Tu edad es: " << edad << endl;
	
	return 0;
	
}
	