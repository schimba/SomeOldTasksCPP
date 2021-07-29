#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void sortowanie_babelkowe(int tab[],int n)
{
	int pom;
	for(int i=0;i<n;i++)
		for(int j=0;j<n-i-1;j++)
		   if(tab[j]>tab[j+1])
		   	{	pom=tab[j];
		   		tab[j]=tab[j+1];
		   		tab[j+1]=pom;
   }
}

int main()
{
int tab[100],n;

cout<<"\n\n\tPodaj ile liczb:  ";
cin>>n;

srand(time(0));
/*wype³nienie tablicy liczbami*/
for(int i=0; i<n; i++)
tab[i]=rand()%100+1;

/*wyprowadzenie zawartoœci tablicy na ekran*/
cout<<"\n\n";
for(int i=0; i<n; i++)
cout<<tab[i]<<"\t";
sortowanie_babelkowe(tab,n);
cout<<"\n\n";
/*wypisanie posortowanych elementów*/
for(int i=0;i<n;i++)
cout<<tab[i]<<"\t";
return 0;
}

