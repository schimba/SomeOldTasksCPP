#include<iostream>
using namespace std;

int sortowanie_babelkowe(int tab[],int n)
{
	for(int i=0;i<n;i++)
	   for(int j=0;j<n-i-1;j++)
	   	{
		    if(tab[j]>tab[j+1])
	   		swap(tab[j],tab[j+1]);
	   	}
}
int main()
{
	int tab[100],n;
	cout<<"\n\nIle liczb: ";
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>tab[i];
	sortowanie_babelkowe(tab,n);
	for(int i=0;i<n;i++)
	cout<<tab[i]<<"\t";
	return 0;
}

