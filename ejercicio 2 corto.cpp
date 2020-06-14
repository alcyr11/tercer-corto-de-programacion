#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
	
	int numero = 0, numeromagico = 67;
	int intentos = 0;
	
	do 
	{
		cout<<"intento #"<<intentos + 1<<"."<<endl;
		cout<<"ingrese el numero: "<<endl;
		cin>>numero;
		if (numero == numeromagico)
		{
			cout<<"Felicidades usted adivino el numero magico"<<endl;
			system("PAUSE");
			system("CLS");
			
			break;
		}
		else
		{
			cout<<"Lo siento intente de nuevo..."<<endl;
			if (numero < numeromagico)
			{
				cout<<"Pista: el numero magico es mayor que el que ingreso"<<endl;
			}
			else 
			{
				cout<<"Pista: el numero magico es menor que el que ingreso"<<endl;
			}
			
			intentos++;
			cout<<"Intentos restantes: "<< 5 - intentos<<endl;
			system("PAUSE");
			system("CLS");
		}
		
	}while (intentos < 5);
	
	if (intentos >= 5)
	{
		cout<<"Lo siento usted perdio..."<<endl;
	}
	
	return 0;
}
