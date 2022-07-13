#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int cuadrante(int n)
{
	int c=0;
	if ((n>=0 && n<=90) /*|| (n>-360 && n<-270)*/)
	{
		c=1;
	}
	else
	if((n>90 && n<=180) /*|| (n<-270 && n>-180)*/)
	{
		c=2;
	}
	else
	if ((n>180 && n<=270) /*|| (n<-90 && n>-180)*/)
	{
		c=3;
	}
	else
	if((n>270 && n<=360) /*|| (n<0 && n>-90)*/)
	{
		c=4;
	}
	return(c);
}

int main(int argc, char** argv) {
	int ang, cuad;
	cout<<"\t CUADRANTE DEL ANGULO "<<endl;
	cout<<"Por Favor, Ingrese el angulo a procesar ";
	cin>>ang;
	cuad=cuadrante(ang);
	if(cuad==1)
	{
		cout<<"El angulo se encuentra en el Primer Cuadrante"<<endl;
		
	}
	else
	if(cuad==2)
	{
		cout<<"El angulo se encuentra en el Segundo Cuadrante"<<endl;
		
	}
	else
	if (cuad==3)
	{
		cout<<"El angulo se encuentra en el Tercer Cuadrante"<<endl;
	}
	else
	{
		cout<<"El angulo se encuentra en el Cuarto Cuadrante"<<endl;
		
	}
	system("pause");
	return 0;
}
