/*
Name: Dodawanie dwóch tablic                 
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int w=10;
int k=10;
int main()
{
int tab[w][k];
int tab1[w][k];
int wynik[w][k];

int kolumna,wiersz,i,j,max;

cout<<"\n\n\tPodaj liczbe maksymalna w zbiorze: ";
cin>>max;
cout<<"\n\n";
cout << "\tPodaj ilosc wierszy: ";
cin >> wiersz;

cout<<"\n\n";
cout << "\tPodaj ilosc kolumn: ";
cin >> kolumna;

srand(time(0));
cout<<"\n\nTablica pierwsza m x n\n\n";
for(int i=0; i<wiersz; i++)
        {
      
        for(j=0; j<kolumna; j++){
                tab[i][j]=rand()%max;
                cout << tab[i][j] << "\t";
                }
        cout << endl;        
        }
        
cout<<"\n\nTablica druga o rozmiarze m x n\n\n";        
for(i=0; i<wiersz; i++)
{
       
        for(int j=0; j<kolumna; j++)
                {
                tab1[i][j]=rand()%(max+1);
                cout << tab1[i][j] << "\t";
                }
        cout << endl;        
        }
        
cout<<"\n\n\tDodawanie dwoch tablic...\n\n";
for(int i=0; i<wiersz; i++)
        {
  
        for(j=0; j<kolumna; j++){
                wynik[i][j]=tab1[i][j]+tab[i][j];
                cout << wynik[i][j] << "\t";
        }
        cout << endl;        
        }



cin.ignore();
getchar();
} 
