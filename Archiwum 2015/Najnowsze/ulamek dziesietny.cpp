#include<iostream>
using namespace std;
int main()
{
	int licznik,mianownik;
	float ulamek;
	cout<<"\n\nPodaj licznik: ";
	cin>>licznik;
	cout<<"\n\nPodaj mianownik: ";
	cin>>mianownik;
	
	ulamek=(float)licznik/mianownik;
	
	cout<<"\n\n wynik: "<<ulamek;
return 0;
}

