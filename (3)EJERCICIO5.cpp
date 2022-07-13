#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using  namespace std;
int numinv(int m)
{
	int c=0,d[1000];
	while(m!=0)
	{
		c=((c*10)+(m%10));
		m=m/10;	
	}
	return(c);
	}
int main(int argc, char** argv)
 {
	int n,mu;
	mu=0;
	cout<<"Ingrese el numero ";
	cin>>n;
	mu=numinv(n);
	cout<<mu<<endl;
	system ("pause");
	return 0;
}
