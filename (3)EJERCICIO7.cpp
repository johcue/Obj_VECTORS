#include <cstdlib>
#include <iostream>
//#include PI=3.1416
using namespace std;

double radianes(int g, int m, int s)
{
 	double rad=0, sum=0;
 	sum=((g)+(m/60)+(s/3600));
 	rad=((sum*3.1416)/180);
 	return (rad);
}

int main(int argc, char *argv[])
{
 	double grado, min, seg, r=0;
	cout<<"\t \t  CONVERSION DE UN ANGULO EN"<<endl;
    cout<<"\t    GRADOS, SEGUNDOS Y MINUTOS A RADIANES"<<endl;
    cout<<endl;
    cout<<"-Por favor, Ingrese el grado ";
	cin>>grado;
    cout<<"-Por favor, Ingrese los minutos ";
	cin>>min; 
    cout<<"-Por favor, Ingrese los segundos ";
	cin>>seg; 
	r=radianes(grado, min, seg);
	cout<<endl<<"La medida "<<grado<<", "<<min<<"', "<<seg<<"'' "<<endl;
	cout<<"Es igual a "<<r<<" Radianes"<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
