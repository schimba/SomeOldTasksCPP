/*
  Name: Zamiana u³amka zwyk³ego na dziesiêtny.
  Copyright: GPL GNU
  Author: WJL
  Date: 04-04-10 12:48
  Description: 
*/

#include<iostream>       
using namespace std;               
int main()                      
{  
int licznik, mianownik; 
float ulamek; 
  
  system("cls");  
  cout<<"\n\n\t\t\tZAMIANA ULAMKA ZWYKLEGO NA DZIESIETNY";   
  cout<<"\n\n\n\t\tPodaj licznik ulamka: ";  
  cin>>licznik;   
  cout<<"\t\tPodaj mianownik ulamka: ";  
  cin>>mianownik; 
  ulamek =(float) licznik / mianownik;                 
  
  cout<<"\n\n\t\t"<<licznik<<"\n\t\t"<<"-- = "<<ulamek<<" \n\t\t"<<mianownik;
    
  cout<<"\n\n Nacisnij dowolny klawisz...\n";  
  cin.ignore();
  getchar();                   
  
  return 0;          
}  
