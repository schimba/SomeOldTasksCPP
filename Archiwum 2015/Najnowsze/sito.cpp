#include<iostream>
#include<math.h>
using namespace std;
int n=1000;

int main()
{
	int i,k,d;
	bool tab[n];
	/*wype�nienie tablicy '1'*/
	for(i=2;i<n;i++)
	tab[i]=1;
	
	d=sqrt(n);
	/*wyznaczenie liczb pierwszych*/
	for(i=2;i<=d;i++)
	if(tab[i]) //sprawdzam czy element tablicy =1
	{k=i*i; //wielokrotno�� liczby pierwszej
	 while(k<=n)
	{
	tab[k]=false;
	 k+=i;}}

/*wyprowadzenie liczb pierwszych na ekran*/
for(i=2;i<=n;i++)
if(tab[i])
cout<<i<<"\t";
return 0;
}

