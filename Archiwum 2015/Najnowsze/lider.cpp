#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
 /* funkcja sprawdzaj�ca - czy wyst�puje lider*/

int szukaj_lidera(int tab[],int n) //n - ile element�w w zbiorze 
{
  int ile;
  int lider = tab[0];//przyjmujemy, �e liderem jest pierwszy element w tablicy
  ile = 1;//przyjmujemy, �e zbiorze wyst�puje minimum jeden element
 
  //wykre�lanie par o r�nych warto�ciach
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
  //koniec wykre�lania
 
  if(ile==0)
    return -1; //zwr�cenie -1 oznacza, �e zbi�r nie posiada lidera
 
  ile = 0; //zmienna zliczaj�ca wyst�pie�ia potencjalnego lidera
 
  for(int i=0;i<n;i++)  //zliczamy wyst�pienia lidera
    if(tab[i]==lider) 
      ++ile;
 
  if(ile>n/2) //sprawdzamy, czy potencjalny lider wyst�puje oczekiwan� ilo�� razy
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
 
