#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>

using namespace std;
int main()
{
   string apno;
    
    int opcion=0;
    float hrtr,tahr,HorasTra,HorasEx,SaldoTotal,
	SaldoTotalP,DescSeguro, DescAFP, DescuentosT, Renta
	,SaldoTotalReal, SalariosGlobales; 
	
	
	do{
	
	cout<<endl<<"1) Calcular Sueldo"<<endl;
	cout<<"2) Ver Sueldo total de empleados"<<endl;
	cout<<"3) Salir..."<<endl;
	cout<<"OPCION: ";
	cin >> opcion;
	
	
	switch(opcion){
	
	case 1:
    cout<<endl<<"INGRESANDO EMPLEADO\n\n";
    cout<<"Nombres: ";cin>>apno;
    cout<<"Horas Trabajadas: ";cin>>hrtr;
    
	if (hrtr<=0)
        cout<<"No trabajo nada"<<endl;
		else{
		cout<<"Horas extra: ";cin>>tahr;
		
		HorasTra = (hrtr*1.75);
		HorasEx= (2.50*tahr);
		
    SaldoTotal= HorasEx + HorasTra;
    DescSeguro =  (SaldoTotal * 4)/100; 
	DescAFP = (SaldoTotal * 6.25 )/100;
	
	if(SaldoTotal > 500 ){
		
		Renta = (SaldoTotal * 10 )/100;
	} 
	
	DescuentosT= DescSeguro + DescAFP + Renta;
	SaldoTotalReal = SaldoTotal - DescuentosT ;  

    
    cout<<"Su Salario total es:"<<SaldoTotal<<endl;
    cout<<"Su Salario Real es:"<<SaldoTotalReal<<endl;
    //cout<<"Descuentos:"<<DescuentosT<<endl;
        
        SalariosGlobales += SaldoTotalReal; 

    }cin.ignore();
	
	break;
	
	case 2:
		
		cout<<endl<<"El TOTAL DE TODOS LOS SALARIOS ES: "<< SalariosGlobales<<endl;
		
		break;
		
		case 3:
			cout<<"bye"<<endl;
			break;
			
	}
		}while(opcion!=3);




return 0;
}