#include <iostream>
#include<stdlib.h>

using namespace std;

int Szukaj(int tab[], int n, int k, int p)
{
  int i;
  tab[n] = k;
  for(i = p; tab[i] != k; i++) ;
  if(i == n) 
  return -1; 
  else return i;
  
}

int main()
{
  int tab[100],n,k,i;
  cout<<"\n\nPodaj ile elementow: ";
  cin >> n;
  for(i = 0; i < n; i++) 
  cin >> tab[i];
  cout<<"\n\nPodaj szukany element: ";
  cin >> k;
  cout << endl << Szukaj(tab,n,k,0)+1 << endl << endl;
  return 0;
} 
