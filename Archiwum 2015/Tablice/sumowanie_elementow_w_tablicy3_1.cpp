/*
  Name: Sumowanie elementow w tablicy poni�ej i powy�ej przekatnej               
*/
#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<iomanip>

using namespace std;
int main ()
{
    int n,suma=0, suma1=0;
    
    cout<<"\n\n\t\tPodaj rozmiar tablicy: ";
    cin>>n;    
    int Matrix[n][n];
    int i,j;
    
    srand(time(NULL));
    
    /*wypelnianie tablicy liczbami pseudolosowymi*/
    
    for(i=0;i<n;i++)
    
       for(j=0;j<n;j++)
          
             
              Matrix[i][j]=rand()%5;                                
               
    /* wy�wietlanie zawarto�ci tablicy */
    
    for(j=0;j<n;j++)
    {
                    cout<<"\n\n\t\t";              
                    for(i=0;i<n;i++)
                       cout<<setw(5)<<Matrix[i][j];
                       cout<<"\n";
    }
    
   /*suma element�w w tablicy poni�ej przekatnej g��wnej*/
    for(j=0;j<n;j++)
    {                               
    for(i=0;i<n;i++)
                     if(i<j)
                      suma=suma+Matrix[i][j]; 
 else  {
 
                      suma1=suma1+Matrix[i][j]; 
}
    }
  
  cout<<"\n\n\tSuma elementow  powyzej przekatnej tablicy wynosi: "<<suma1;
  cout<<"\n\n\tSuma elementow  ponizej przekatnej tablicy wynosi: "<<suma;
  
         
    cin.ignore();
    getchar();
    return 0;
}
    
    
