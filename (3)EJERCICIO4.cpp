#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

bool palin(int n)
{
	int num,a,b,c,t;
	a=num%10;
	b=a/10;
	c=b/10;
	num=(a*100)+(t*10)+c;
	if(num==n)
	{
		return true;
	}
	else
	{
		return false;
	}	
}

int main(int argc, char** argv)
{
	int m;
	cout<<"\t NUMERO PALINDROMO"<<endl;
	cout<<"Por favor, Ingrese el numero a procesar ";
	cin>>m;
	if(palin(m))
	{
		cout<<"El numero "<<m<<" es palindromo"<<endl;
	}
	else
	{
		cout<<"El numero "<<m<<" NO es palindromo"<<endl;
	}
	system ("pause");
	return 0;
}
