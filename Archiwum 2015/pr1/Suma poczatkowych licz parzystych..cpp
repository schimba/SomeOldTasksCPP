#include <iostream>  
#include <cstdlib>  
  
using namespace std;  
  
int main(int argc, char *argv[])  
{  
  float  n,suma,i;  
       
    
  cout << "Podaj liczbe liczb n=";  
  cin  >> n;  
    
  suma=0;  
  for (i=0;i<n;i++)  
    suma+=2*i;  
    
  cout << "\n\nSuma " << n << " poczatkowych liczb parzystych wynosi " << suma << endl << endl;  
  
  system("PAUSE");    
  return 0;  
}  
