#include <iostream>

using namespace std;

void imprtabla(float ntabla);

void imprtabla(float ntabla) 
{
	int resultado = 0;
	int suma = 0;
	int v = 0;
	for (v = 1; v <= 10; v++) 
	{
		
		resultado = ntabla * v;
		cout << ntabla << " x " << v << " = " << resultado << endl;
		suma = suma + resultado;

	}
	cout << "La suma de los resultados de la tabla es " << suma << endl;
    
	cout << "" << endl;
}

int main() 
{
	int ntabla;

	for (ntabla = 1; ntabla <= 5; ntabla++)
	{
		imprtabla(ntabla);
	}
	
    return 0;
}