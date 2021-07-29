/*
  Name: Dzia³ania na u³amkach
*/
#include <iostream>
using namespace std;

int nwd (int a, int b)
{
    if (a==b)
    return a;
    else
    while (a!=b)
    {
          if (a>b)
          a=a-b;
          else if (a<b)
          b=b-a;
    }
    return a;
}

int main()
{
    int licznik1, licznik2;
    int mianownik1, mianownik2;
    int NWD, NWW;
    int nowy_licznik1, nowy_licznik2;

    cout<<"\n\n\tPodaj licznik pierwszego ulamka: ";
    cin>>licznik1;
    cout<<"\n\n\tPodaj licznik drugiego ulamka: ";
    cin>>licznik2;
    cout<<"\n\n\tPodaj mianownik pierwszego ulamka: ";
    cin>>mianownik1;
    cout<<"\n\n\tPodaj mianownik drugiego ulamka;  ";
    cin>>mianownik2;
    system("cls");

    cout<<"\n\n\t\tWprowadzono ulamki\n\n";
    cout<<"\n\n\tPierwszy ulamek to: "<<licznik1<<"/"<<mianownik1;
    cout<<"\n\tDrugi ulamek to: "<<licznik2<<"/"<<mianownik2;

    NWD = nwd (mianownik1, mianownik2);
    cout<<"\n\n\tNWD mianownikow: "<<NWD;
    NWW = (mianownik1 * mianownik2) / NWD;
    cout<<"\n\tNWW mianownikow: "<<NWW;


    nowy_licznik1 = (NWW / mianownik1) * licznik1;
    nowy_licznik2 = (NWW / mianownik2) * licznik2;
    cout<<"\n\n\tWartosc ulamkow sprowadzonych do wspolnego mianownika: ";
    cout<<"\n\n\tUlamek pierwszy: "<<nowy_licznik1<<"/"<<NWW;
    cout<<"\n\tUlamek drugi: "<<nowy_licznik2<<"/"<<NWW<<"\n\n";

    system("pause");
    system("cls");

    //DODAWANIE U£AMKÓW
    cout<<"\n\n";
    int nowe_liczniki;
    nowe_liczniki = nowy_licznik1 + nowy_licznik2;
    cout<<"\tDodawanie ulamkow\n\n\t "<<nowy_licznik1<<"/"<<NWW<<" + "<<nowy_licznik2<<"/"<<NWW<<"= "<<nowe_liczniki<<"/"<<NWW;


    //ODEJMOWANIE U£AMKÓW (PIERWSZY OD DRUGIEGO)
    cout<<"\n\n";
    nowe_liczniki = nowy_licznik2 - nowy_licznik1;
    cout<<"\tOdejmowanie ulamkow\n\n\t "<<nowy_licznik1<<"/"<<NWW<<" - "<<nowy_licznik2<<"/"<<NWW<<"= "<<nowe_liczniki<<"/"<<NWW;

    //MNO¯ENIE U£AMKÓW
    cout<<"\n\n";
    int pomnozony_licznik, pomnozony_mianownik;
    pomnozony_licznik = licznik1 * licznik2;
    pomnozony_mianownik = mianownik1 * mianownik2;
    cout<<"\tMnozenie ulamkow\n\n\t "<<nowy_licznik1<<"/"<<NWW<<" x "<<nowy_licznik2<<"/"<<NWW<<"= "<<pomnozony_licznik<<"/"<<pomnozony_mianownik;

    //DZIELENIE U£AMKÓW (PIERWSZY OD DRUGIEGO)
    cout<<"\n\n";
    int tmp1, tmp2;
    tmp1 = licznik2;
    tmp2 = mianownik2;
    pomnozony_licznik = licznik1 * tmp2;
    pomnozony_mianownik = mianownik1 * tmp1;
    cout<<"\tDzielenie ulamkow\n\n\t "<<nowy_licznik1<<"/"<<NWW<<" : "<<nowy_licznik2<<"/"<<NWW<<"= "<<pomnozony_licznik<<"/"<<pomnozony_mianownik;
    cout<<"\n\n";
    system("pause");
    return 0;
}
