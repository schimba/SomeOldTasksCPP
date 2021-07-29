/*
  Name: Suma kolumn i wierszy w tablicy 
 
*/

#include <iostream>
#include<time.h>
#include<stdlib.h>
int n=5;
int m=5;
using namespace std;

int main()
{
	int	tab[n][m],
		i, j,k= 0,suma;
	
srand (time(0));

for(i = 0; i <n;i++)
	for(j = 0; j <m; j++) 
	    tab[i][j]=rand()% (5+1);
	     

 cout<<"\n\n\tObliczanie sumy elementow w poszczegolnych kolumnach tablicy\n\n"; 
    
    for(i = 0; i <n;i++)
    {
		suma = 0;
		for(j = 0; j <m; j++) 
        suma+= tab[i][j];
		cout <<" "<<++k<<" kolumna suma= "<<suma<<"\n"; 
    }
 
 cout<<"\n\n\tObliczanie sumy elementow w poszczegolnych wierszach tablicy\n\n"; 	
	k=0;
    for(i = 0; i < n;i++)
    {
		suma = 0;
		for(j = 0; j < m; j++) 
        suma+= tab[j][i];
		cout <<" "<<++k<<" wiersz suma= "<<suma<<"\n"; 
    }
	
    cin.ignore();
    getchar();
    return 0;
}
