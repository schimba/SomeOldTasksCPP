#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
 /* funkcja sprawdzaj¹ca - czy wystêpuje lider*/

int szukaj_lidera(int tab[],int n) //n - ile elementów w zbiorze 
{
  int ile;
  int lider = tab[0];//przyjmujemy, ¿e liderem jest pierwszy element w tablicy
  ile = 1;//przyjmujemy, ¿e zbiorze wystêpuje minimum jeden element
 
  //wykreœlanie par o ró¿nych wartoœciach
  for(int i=1;i<n;i++)
  if(ile > 0)
    if(tab[i]==lider) 
      ++ile; 
    else
      --ile; 
  else
  {
    ++ile;
    lider = tab[i];
  }
  //koniec wykreœlania
 
  if(ile==0)
    return -1; //zwrócenie -1 oznacza, ¿e zbiór nie posiada lidera
 
  ile = 0; //zmienna zliczaj¹ca wyst¹pieñia potencjalnego lidera
 
  for(int i=0;i<n;i++)  //zliczamy wyst¹pienia lidera
    if(tab[i]==lider) 
      ++ile;
 
  if(ile>n/2) //sprawdzamy, czy potencjalny lider wystêpuje oczekiwan¹ iloœæ razy
    return lider;
 
  return -1;
}

int main()
{
  int n, tab[100], lider;
 
  cout<<"Ile liczb chcesz wczytac? ";
  cin>>n;
  
  for(int i=0;i<n;i++)
    tab[i]=rand()%5+1;
 
  lider = szukaj_lidera(tab,n);
 
  if(lider==-1)
    cout<<"Zbior nie posiada lidera"<<endl;
  else
    cout<<"Liderem zbioru jest "<<lider<<endl;
	 
 
  return 0;
}
 
