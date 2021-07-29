#include<iostream>
#include<cstdlib>
using namespace std;
 
int szukaj_lidera(int tab[],int n)
{
  int lider = tab[0], do_pary = 1;
 
  //wykreslanie par o róznych wartosciach
  for(int i=1;i<n;i++)
  if(do_pary > 0)
    if(tab[i]==lider) 
      ++do_pary; 
    else
      --do_pary; 
  else
  {
    ++do_pary;
    lider = tab[i];
  }
  //koniec wykreslania
 
  if(do_pary==0)
    return -1; //zwrócenie -1 oznacza, ze zbiór nie posiada lidera
 
  int ile = 0; //zmienna zliczajaca wystapienia potencjalnego lidera
 
  for(int i=0;i<n;i++)  //zliczamy wystapienia lidera
    if(tab[i]==lider) 
      ++ile;
 
  if(ile>n/2) //sprawdzamy, czy potencjalny lider wystepuje oczekiwana ilosc razy
    return lider;
 
  return -1;
}
 
int main()
{
  int n, *tab, lider;
 
  cout<<"Ile liczb chcesz wczytac? ";
  cin>>n;
 
  tab = new int [n];
 
  for(int i=0;i<n;i++)
    cin>>tab[i];
 
  lider = szukaj_lidera(tab,n);
 
  if(lider==-1)
    cout<<"Zbiór nie posiada lidera"<<endl;
  else
    cout<<"Liderem zbioru jest "<<lider<<endl;
 
  delete [] tab;  
 
  return 0;
}
 
