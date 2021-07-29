#include <cstdlib>
#include <iostream>

using namespace std;

 int main()
 {
 int z;  
    for(int i=1;i<=10;i++)
    {
           
       for(int x=1;x<=10;x++) 
       {
       z=x*i;
       cout<<x<<"*"<<i<<"="<<z<<"\t";
       }
     }     
    cin.ignore();
    getchar();
 

return 0;
 }

