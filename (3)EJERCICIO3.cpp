#include <cstdlib>
#include <iostream>

using namespace std;
int sumdigitos(int n)
{
    int cont;
    cont=0;
    while(n>0)
    {
    	n=n/10.0;
    	cont++;
	}
	return(cont);
}


int main(int argc, char *argv[])
{
    int a,d,sud;
	char resp;
    do
    {
	system("cls");
	sud=0;
	cout<<"\t SUMA DE DIGITOS DE UN NUMERO "<<endl;
    cout<<"Por favor, Ingrese el numero a procesar ";
    cin>>a;
    sud=sumdigitos(a);
    cout<<endl<<"El numero "<<a<<" tiene "<<sud<<" digitos"<<endl;  
    cout<<endl<<"Desea procesar otro conjunto? s/n ";
	cin>>resp;
    }while(resp=='s');
    cout<<"Oki"<<endl;
	system("PAUSE");
    return EXIT_SUCCESS;
}
