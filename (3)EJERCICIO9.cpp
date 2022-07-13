#include <iostream>
#include <cstdlib>
#include <math.h>
#define PI 3.1416
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
double coordenadas(int alfa, int v)
{
	double d=0,x,y;
	x=(v*(cos((alfa*PI)/180)*0.1));
	y=((v*sin((alfa*PI)/180)*0.1)-(0.5*9.8*0.01));
	return (x,y);
}
int main(int argc, char** argv) 
{
	double vel,ang,c=0,x,y;
	cout<<"\t COORDENADAS DE LA TRAYECTORIA DE UN PROYECTIL A INTERVALOS DE 0.1 s"<<endl;
	cout<<"Por favor, ingrese el angulo de disparo ";
	cin>>ang;
	cout<<"Por favor, ingrese la velocidad inicial de disparo ";
	cin>>vel;
	c=coordenadas(ang,vel);
	cout<<c<<endl;
	system ("pause");
	return 0;
}
