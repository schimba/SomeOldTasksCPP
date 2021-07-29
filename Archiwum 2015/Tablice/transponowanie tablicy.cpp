/*
  Name: Transponowanie macierzy kwadratowej (statyczna)
 
*/

#include <iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

main()
{
  int n,i,j,t;
    
  cout<<"\n\nPodaj rozmiar tablicy kwadratowej (liczba wierszy == liczbie kolumne): ";
  cin>>n; 
  int A[n][n]; 
  cout<<"\n\n\tPodaj liczby:\n\n";
  
  for(i = 0; i < n; i++)
    for(j = 0; j < n; j++) 
    cin>>A[i][j];
    system("cls");

  /*Wysietlamy tablice A na ekranie*/ 

  cout << "\n\nTablica A:\n\n";

  for(i = 0; i < n; i++)
  {
    for(j = 0; j < n; j++) 
    cout <<"\t"<< A[i][j];
    cout << "\n";
  }
  
  /*Taransponowanie Tablicy A */
  
  for(i = 0; i < n - 1; i++)
    for(j = i + 1; j < n; j++)
    {
      t = A[i][j];
      A[i][j] = A[j][i];
      A[j][i] = t;
    }
    
  /* Wyswietlenie macierzy A transponowanej na ekranie*/

  cout<<"\n\n\tTransponowana tablicy kwadratowa";
  cout << endl << "\n\nTablica AT:\n\n";
  
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < n; j++) 
    cout <<"\t"<< A[i][j];
    cout << "\n";
  }

   
  cin.ignore();
  getchar();
  return 0;
}
