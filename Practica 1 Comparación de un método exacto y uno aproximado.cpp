#include <iostream>
#include <conio.h>
#include <math.h>
//Juan Pablo Martinez Rocha
using namespace std;
int main(){
	
	
	int opc;
	float c,m,t[51],ve,x,temp1,vn,temp2,delt1,delt2;
	do{
		
		cout<<"**************************************************************************"<<endl;
		cout<<"*************Comparacion de un metodo exacto y uno aproximado*************"<<endl;
		cout<<"**************************************************************************"<<endl;
		cout<<endl;
		cout<<"Seleccione su opcion"<<endl;
		cout<<"1.-Inicar su programa"<<endl;
		cout<<"2.-Creditos"<<endl;
		cout<<"3.-Salir"<<endl;
		scanf("%d",&opc);
		
		
		switch(opc){
			
			case 1:
			system("CLS");
				
			//Tiempo (Intervalos de 0.5 segundos)	
			for(int i=0;i<50;i++){					
			t[i]=t[i-1]+0.5;
			}
	
			cout<<"Introduzca la masa del paracaidista"<<endl;
			scanf("%d",&m);
			cout<<"Introduzca la constante de resistencia del viento"<<endl;
			scanf("%d",&c);
			cout<<"Tiempo		Vexacta		Vnumerica"<<endl;
			cout<<"0		0.00000		0.00000"<<endl;
			
			
			for(int i=0;i<50;i++){
				//Vexacta
				temp1=c/m;
				temp1=temp1*-1;
				temp1=temp1*t[i];
				x=exp(temp1);
				ve=9.81*(m/c)-(9.81*m/c)*x;
				
				//Vnumerica
				temp2=m*9.81;
				delt1=c*t[i-1];
				temp2=temp2-delt1;
				temp2=temp2/m;
				delt2=temp2*0.5;
				vn=delt2+t[i-1];
				
				//Imprimir
				cout<<t[i];
				cout<<"		";
				cout<<ve;
				cout<<"		";
				cout<<vn<<endl;
			}
			system("pause");
			break;
			case 2:
				
			system("CLS");
			cout<<"Universidad Autonoma de Aguascalientes"<<endl;
			cout<<"**********************************************************"<<endl;
			cout<<"MAESTRA:"<<endl;
			cout<<"Dra. Aurora Torres Soto"<<endl;
			cout<<"Alumno:                               ID:"<<endl;
			cout<<"Juan Pablo Martínez Rocha              243645"<<endl;
			cout<<"**********************************************************"<<endl;
			system("pause");
			system("CLS");
			break;
					
		}
		
	}while(opc!=3);
	
	
	
	
	
} 


