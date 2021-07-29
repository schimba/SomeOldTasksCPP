#include <iostream>  
#include <cstdlib>  
  
using namespace std;  
  
int main(int argc, char *argv[])  
{  
  int n,i;  
  float x,wynik;  

	xd:

  cout << "Podaj podstawe potegi:  ";  
  cin  >> x;  

  cout << "Podaj wykladnik potegi: ";  
  cin  >> n;  
        
  wynik=1;  
  for (i=0;i<n;i++)  
    wynik=wynik*x;  
      
  cout << "\n\n" << x << "^" << n << " = " << wynik << endl << endl;  
  
  goto xd;
    
  system("PAUSE");    
  return 0;  
}  
