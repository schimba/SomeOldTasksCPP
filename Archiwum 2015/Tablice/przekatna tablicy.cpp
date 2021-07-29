/*
  Name: Przekatna tablicy
                
*/
#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<iomanip>

using namespace std;
int main ()
{
    int n,suma=0;
    
    cout<<"\n\n\t\tPodaj rozmiar macierzy: ";
    cin>>n;    
    int Matrix[n][n];
    int i,j;
    
    srand(time(NULL));
    
    /*wypelnianie tablica liczbami pseudolosowymi*/
    
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
          {
             do
              Matrix[i][j]=rand()%5;                                
               while(Matrix[i][j]==0);
          }
    }
    
    /* wyœwietlanie zawartoœci tablicy */
    
    for(j=0;j<n;j++)
    {
                    cout<<"\n\n\t\t";              
                    for(i=0;i<n;i++)
                       cout<<setw(5)<<Matrix[i][j];
                       cout<<"\n";
    }
    
   
     cout<<"\n\n\tLiczby na przekatnej glownej: \n\n";
    for(j=0;j<n;j++)                                
       for(i=0;i<n;i++)
           if(i==j)
           { suma=suma+Matrix[i][j];
            cout<<setw(5)<<Matrix[i][j];}
         
    cout<<"\n\n\tSuma elementow znajdujacuych sie na przekatnej tablicy: "<<suma;
    cin.ignore();
    getchar();
    return 0;
}
    
    

