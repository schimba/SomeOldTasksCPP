#include <cstdlib>
#include <iostream>
 
using namespace std;
 
int main()
{
  int rok;
 
  cout<<"Podaj rok: ";
  cin>>rok;
 
  if((rok%4==0 && rok%100!=0) || rok%400==0) 
    cout<<"Rok "<<rok<<" ROK JEST PRZESTEPNY";
  else
    cout<<"Rok "<<rok<<" ROK NIE JEST PRZESTEPNY";
 
  cout<<endl;
 
  system("pause");
  return 0;
}
 
