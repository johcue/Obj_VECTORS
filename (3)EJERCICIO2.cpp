#include <iostream>
#include <cstdlib>
//
using namespace std;

int bisiesto(int n)
{
	int c=0;
     if(n%4==0)
     {
        if(n%100!=0 || n%400!=0)
          {
             c++;
          }
     }
        return (c);
}
               

int main(int argc, char *argv[])
{
    int a,b;
    char resp;
    do
    {
    system("cls");
    cout<<"\t ANIO BISIESTO"<<endl;
    cout<<"Por favor Ingrese el año a procesar ";
    cin>>a;
    b=bisiesto(a);
    if(b>0)
    {
    	cout<<"El anio "<<a<<" es Bisiesto"<<endl;	
	}
	else
	{
		cout<<"El anio "<<a<<" No es Bisiesto"<<endl;
	}
    cout<<"Desea procesar otro anio? s/n ";
    cin>>resp;
}while(resp=='s');
    cout<<"Bueno :c ";
    system("PAUSE");
    return EXIT_SUCCESS;
}
