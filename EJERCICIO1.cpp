#include <cstdlib>
#include <iostream>
#include <cmath>
//1. PRIMOS GEMELOS
using namespace std;

bool primo(int h)
{
	int div=0, m=1;
	while (m<=h)
	{
		if (h%m==0)
			div++;
		m++;
	 }
  	 if (div==2||h==1)
		{
			return true;
		}
	 else
	  {
	  	return false;
	  }
}

int main(int argc, char *argv[])
{
    int i,j,a,b,d[100];
    char resp;
    do
    {
    system("cls");
	j=0;
    cout<<"\t PRIMOS GEMELOS"<<endl;
    cout<<"Por favor, Ingrese los numeros enteros a procesar ";
    cin>>a>>b;
	if(a==b && a<=0 && b<=0)
	{
		cout<<"Los numeros DEBEN ser Naturales y Diferentes. "<<endl;
	}
	else	
	{
		if (a>b)
		{
			a=a+b;
			b=a-b;
			a=a-b;
		}
		j=0;
		for (i=a;i<=b;i++)
		{
			if (primo(i))
			{
				d[j]=i;
				j++;
			}
		}
		if(j!=0)
		{
		    cout<<"Total de primos hallados:"<<j<<endl;
		    cout<<endl;
		    for (i=0;i<j-1;i++)
		    {
		    	if (fabs(d[i+1]-d[i])==2)
				{
					cout<<"Los numeros gemelos son "<<d[i]<<" y "<<d[i+1]<<endl;
				}
		     }
		}
		else
		{
			cout<<"No se encontraron Primos"<<endl;
		}
		
	}
	cout<<"Desea procesar otro par de numeros? s/n ";
    cin>>resp;
    }while(resp=='s');
    system("pause");
    return 0;
}
