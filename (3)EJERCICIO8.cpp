#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

double dist(int x1, int x2, int y1, int y2)
{
 	 double d=0, a=0, b=0;
 	 a=pow((x2-x1),2);
 	 b=pow((y2-y1),2);
 	 d=sqrt((a+b));
 	 return(d);
 	 }

int main(int argc, char *argv[])
{
 	double i1,i2,j1,j2,c;
 	char resp;
 	do
 	{
 	system("cls");
 	c=0;
 	cout<<"\t \t DISTANCIA ENTRE DOS PUNTOS"<<endl;
 	cout<<"Por favor, Ingrese el primer punto A=(x1,y1)= ";
 	cin>>i1>>j1;
 	cout<<"Por favor, Ingrese el segundo punto B=(x2,y2)= ";
 	cin>>i2>>j2;
 	c=dist(i1,i2,j1,j2);
 	cout<<endl<<"La distancia entre los puntos"<<endl;
    cout<<"A=("<<i1<<","<<j1<<") y B=("<<i2<<","<<j2<<") es "<<c<<endl;
 	cout<<"Desea procesar otras coordenadas? s/n ";
 	cin>>resp;
    }while (resp=='s');
    system("PAUSE");
    return EXIT_SUCCESS;
}
