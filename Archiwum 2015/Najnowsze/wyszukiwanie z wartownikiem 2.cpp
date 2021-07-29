#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<stdlib.h>

using namespace std;

int Szukaj(int tab[], int n, int k)
{
  int i;
  tab[n] = k;
  for(i = 0; tab[i] != k; i++) ;
  if(i == n) 
  return -1; 
  else return i;
  
}

int main()
{
  int tab[100],n,k,i;
  cout<<"\n\nPodaj ile elementow: ";
  cin >> n;
  srand(time(0));
  for(i = 0; i < n; i++) 
  tab[i]=rand()%100 + 1;
  cout<<"\n\n";
  for(i=0;i<n;i++)
  cout<<tab[i]<<"\t";
  cout<<"\n\nPodaj szukany element: ";
  cin >> k;
  cout << endl << Szukaj(tab,n,k)+1 << endl << endl;
  return 0;
} 
