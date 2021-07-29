/*
  Name: Sprowadzanie n ulamkow do wspolnego mianownika
  Copyright: GPL GNU
*/

#include <stdio.h>
#include <stdlib.h>

int NWD(int l1,int l2)
{
    while(l1!=l2)
    {
                 if(l1>l2)
                 l1-=l2;
                 else
                 l2-=l1;
                 }
    return l1;
    }

int NWW(int l1,int l2){
return (l1*l2)/NWD(l1,l2);}

int main()
{
bool *tab;
int *mianownik,i,j,n,min=2147483647,nww,wspolny;

/* Wprowadzenie danych */
printf("\n\n\tPodaj ilosc ulamkow: ");
scanf("%d",&n);
mianownik=new int[n];

for(i=0;i<n;i++)
{
                printf("\n\tPodaj mianownik ulamka: ");
                scanf("%d",&mianownik[i]);
                if(mianownik[i]<min)
                min=mianownik[i];
                }

tab=new bool[min+1];
for(i=0;i<min+1;i++)
tab[i]=0;

/* Sprawdzenie wspolnych dzielnikow */
for(i=2;i<=min;i++)
{
    if(tab[i]==1)    // jezeli natrafimy na wielokrotnosc poprzedniego dzielnika
    continue;
    for(j=0;j<n;j++) // sprawdzenie potencjalnego dzielnika na mianownikach
    if(mianownik[j]%i!=0)
    break;
    if(j==n)         // jezeli mamy wspolny dzielnik dla wszystkich mianownikow
    {
    wspolny=i;
    goto wyprowadzenie;
    }
    for(j=2*i;j<=min;j+=i) // wyrzucenie wielokrotnosci potencjalnego dzielnika,
    tab[j]=1;              // nie moga byc one dzielnikami
    }

/* Sprawdzenie najnizszej wspolnej wielokrotnosci */
nww=mianownik[0];
for(i=1;i<n;i++)
nww=NWW(nww,mianownik[i]);
wspolny=nww;

wyprowadzenie: // rozwiazania
printf("\n\n\tWspolny mianownik dla ulamkow: %d\n\n\t",wspolny);

system("pause");
return 0;
}
