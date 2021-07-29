#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c,x1,x2, delta;
	cout<<"\n\nPodaj a:";
	cin>>a;
	if(a==0)
	{
		cout<<"\n\nBledne dane.";
		return 0;
	}
	cout<<"\nPodaj b,c: ";
	cin>>b>>c;
	delta =b*b - 4*a*c;
	
	cout<<"\n\ndelta ="<<delta;
	if(delta>0)
	{
		x1=(-b+sqrt(delta))/2*a;
		x2=(-b-sqrt(delta))/2*a;
		cout<<"\n\nX1= "<<x1;
		cout<<"\n\nX2= "<<x2;
	}
	if(delta==0)
	   {
	   	x1=-b/2*a;
	   	cout<<"\n\nX = "<<x1;
	   }
	if(delta<0)
	cout<<"\n\nBrak miejsc zerowych. ";
	return 0;
}
