/*
  Name: Ciag arytmetyczny a tablica dwuwymiarowa
 
*/

#include<iostream>
#include <iomanip>
using namespace std;

int main(void)
{
//deklaracja tablicy o wymiarach 3x3
int tablica[3][3],i,j,r=5,a;

//wprowadzenie dnaych do tablicy
  cout <<"Podaj wartosc liczby a: ";
  cin>>a;
  cout <<"Podaj wartosc liczby r: ";
  cin>>a;
  
  for (i=0; i<3; i++)
    {
      for (int j=0; j<3; j++)
        {
        tablica[i][j]=a;
        a=a+r;
        }
     }
  cout<<endl<<endl;
 
//wyprowadzenie dnaych z tablicy
  printf("DANE ZAWARTE W TABLICY 3x3\n\n");
  for (i=0; i<3; i++)
  {
    for (int j=0; j<3; j++)
    {
      cout<<setw(4)<<tablica[i][j]; 
    }      
      cout <<endl;	
  }
cin.ignore();
getchar();
}

