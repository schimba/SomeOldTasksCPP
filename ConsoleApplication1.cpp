
#include "pch.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{

	int informacyjna = 0;
	int losowe = 0;
	int losowo = 0;
	int znak = 0;
	int m[8] = { 0,0,0,0,0,0,0,0 };
	int slowo[14];
	int odebrane[14];
	int g[8][14] = {
			{1,0,0,0,0,0,0,0,0,1,1,1,0,0},
			{0,1,0,0,0,0,0,0,0,0,1,1,1,0},
			{0,0,1,0,0,0,0,0,0,0,0,1,1,1},
			{0,0,0,1,0,0,0,0,1,0,0,1,1,0},
			{0,0,0,0,1,0,0,0,0,1,0,0,1,1},
			{0,0,0,0,0,1,0,0,1,0,1,1,0,0},
			{0,0,0,0,0,0,1,0,0,1,0,1,1,0},
			{0,0,0,0,0,0,0,1,0,0,1,0,1,1},

	};
	////////////////////////////////////////////////////////////////////////////menu 1
	cout << "////////////////////////////////" << endl;
	cout << "///   Kodowanie 2 Projekt    ///" << endl;
	cout << "///    Piotr Nowak 242016    ///" << endl;
	cout << "////////////////////////////////" << endl;
	cout << "\n------ Co chcesz zrobic? ------" << endl;
	cout << "\n1. Wprowadz czesc informacyjna" << endl;
	cout << "2. Wygeneruj czesc informacyjna" << endl;
	cin >> informacyjna;
	system("cls");
	if (informacyjna == 1)
	{
		cout << "Wprowadz czesc informacyjna binarnie(po cyfrze)" << endl;
		for (int i = 0; i < 8; i++)
		{
			cin >> losowo;
			m[i] = losowo;
		}
	}
	if (informacyjna == 2)
	{
		srand((unsigned)time(0));
		for (int i = 0; i < 8; i++)
		{
			losowo = (rand() % 2);
			m[i] = losowo;
			losowo = 0;
		}
	}
	//czesc informacyjna
	cout << "Czesc informacyjna to: \n" << endl;
	for (int i = 0; i < 8; i++)
	{
		losowo = m[i];
		cout << losowo;
	}
	cout << endl;
	//macierz generujaca
	cout << "\nMaciez generujaca to: \n" << endl;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 14; j++)
		{
			cout << g[i][j];
		}
		cout << endl;
	}
	//oblicznie wagi czesci informacyjnej
	int waga = 0;
	for (int i = 0; i < 8; i++)
	{
		if (m[i] == 1)
		{
			waga++;
		}
	}
	int temporar[8][14];
	int pomoc = 0;
	cout << "--------------" << endl;
	for (int i = 0; i < 8; i++)
	{
		if (m[i] == 1)
		{
			for (int j = 0; j < 14; j++)
			{
				temporar[pomoc][j] = g[i][j];
			}
			pomoc++;
		}
	}
	for (int i = 0; i < 14; i++)
	{
		for (int j = 0; j < waga; j++)
		{
			znak = znak + temporar[j][i];
		}
		slowo[i] = znak % 2;
		odebrane[i] = znak % 2;
		cout << slowo[i];
		znak = 0;
	}
	cout << endl;
	cout << "\nOdleglosc minimalna wynosi d=3" << endl;
	cout << "\nZdolnosc detekcyjna wynosi d-1=2" << endl;
	cout << "\nZdolnosc korekcyjna wynosi t=int[(d-1)/2]=1" << endl;
	////////////////////////////////////////////////////////////////////////////menu 2
	cout << endl;
	cout << "\n--- W jaki sposob przeklamac? ---" << endl;
	cout << "\n1. Blad w czesci informacyjnej" << endl;
	cout << "2. Blad w czesci nadmiarowej" << endl;
	cout << "3. Dwa lub wiecej bledow" << endl;
	cin >> losowe;
	losowo = 0;
	system("cls");
	//blad w czesci informacyjnej
	if (losowe == 1)
	{
		losowo = (rand() % 8);
		if (odebrane[losowo] == 1)
		{
			odebrane[losowo] = 0;
		}
		else
		{
			odebrane[losowo] = 1;
		}
		cout << "Odebrane slowo kodowe:" << endl;
		for (int i = 0; i < 14; i++)
		{
			cout << odebrane[i];
		}
		cout << endl;
		cout << "\nPoprawione slowo kodowe:" << endl;
		for (int i = 0; i < 14; i++)
		{
			cout << slowo[i];
		}
		cout << endl;
		for (int i = 0; i < losowo; i++)
		{
			cout << " ";
		}
		cout << "^" << endl;
		cout << "Przeklamanie wystapilo na " << losowo + 1 << " bicie";
	}
	//blad w czesci nadmiarowej
	if (losowe == 2)
	{
		losowo = (rand() % 6) + 5;
		if (odebrane[losowo] == 1)
		{
			odebrane[losowo] = 0;
		}
		else
		{
			odebrane[losowo] = 1;
		}
		cout << "Odebrane slowo kodowe:" << endl;
		for (int i = 0; i < 14; i++)
		{
			cout << odebrane[i];
		}
		cout << endl;
		cout << "\nPoprawione slowo kodowe:" << endl;
		for (int i = 0; i < 14; i++)
		{
			cout << slowo[i];
		}
		cout << endl;
		for (int i = 0; i < losowo; i++)
		{
			cout << " ";
		}
		cout << "^" << endl;
		cout << "\nPrzeklamanie wystapilo na " << losowo + 1 << " bicie";
	}
	//wiecej bledow
	if (losowe == 3)
	{
		losowo = (rand() % 10) + 2;
		cout << "Wystapilo " << losowo << " przeklaman" << endl;
		for (int i = 0; i < losowo; i++)
		{
			if (odebrane[i] == 1)
			{
				odebrane[i] = 0;
			}
			else
			{
				odebrane[i] = 1;
			}
		}
		cout << "\nOdebrane slowo kodowe:" << endl;
		for (int i = 0; i < 14; i++)
		{
			cout << odebrane[i];
		}
		cout << endl;
		if (losowo == 2)
		{
			cout << "\nNatepuje detekcja, ale nie mozna skorygowac bledu" << endl;
		}
		else
		{
			cout << "\nNiemozliwa jest detekcja ani skorygowanie bledow" << endl;
		}
	}
	cout << endl;
	system("PAUSE");
	return 0;
}
