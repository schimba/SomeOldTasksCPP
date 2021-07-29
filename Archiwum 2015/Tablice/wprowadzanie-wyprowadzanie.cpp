/*
  Name: Tablica n x m (statyczna dane wprowadzane z klawiatury)
  Description: 
*/

#include <iostream>
using namespace std;

int main()
{
 
  int n,m,i,j,k,max;

  cout<<"\n\n\tPodaj liczbe wierszy w tablicy m= ";
  cin >> m;
  cout<<"\n\n\tPodaj liczbe kolumn w tablicy m= ";
  cin >> n;
  int MAC[m][n]; 
  for(i = 1; i <= m; i++)
    for(j = 1; j <= n; j++)
      cin>>MAC[i][j];
  
  system ("cls");
 
  cout<<"\n\n\tTablica M X N\n\n";
  for(i = 1; i <= m; i++)
  {
    for(j = 1; j <= n; j++)
      
    cout << MAC[i][j] << "\t";
    cout << endl;
  }

  cin.ignore();
  getchar();
  return 0;
}
