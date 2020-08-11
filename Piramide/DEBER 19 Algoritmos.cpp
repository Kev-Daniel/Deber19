
#include <iostream>
#include <fstream>
using namespace std;
void  triangulo(int x);
void arch();
int n;
int main()
{
	cout << "Ingrese un numero entero positivo\n";
	cin >> n;
	arch();

}
void arch() {
	ifstream deber19;
	deber19.open("deber19.txt", ios::out);
	deber19 << triangulo(n);
	deber19.close();

}
void  triangulo(int x) {
 	if (n % 2 == 0) {
		for (int i = 0; i < n; i++) {
			i--;
			cout << "\t\t";
			for (int j = 0; j < n; j++)
			{
				if (n % 2 == 0) {
					cout << "* ";
				}
				else {
					cout << "- ";
				}
			}
			cout << "\n";
			n--;
		}
	}
	else {

		for (int i = 0; i < n; i++) {
			i--;
			cout << "\t\t";
			for (int j = 0; j < n; j++)
			{
				if (n % 2 != 0) {
					cout << "* ";
				}
				else {
					cout << "- ";
				}
			}
			cout << "\n";
			n--;
		}

	}
}



// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
