#include<iostream>
using namespace std;

int main()
{
	unsigned long long F,F0,F1;
	int i,n;
	F0=0;
	F1=1;
	cout<<"\n\nPodaj n: ";
	cin>>n;
	for(i=0;i<=n;i++)
		if(i>1)
			{
			F=F0+F1;
			F0=F1;
			F1=F;
	       }
	    else
	    F=i;
	    
	    cout<<"\n\n\tF("<<n<<")= "<<F;
	return 0;
    
}
