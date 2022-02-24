#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	//y=asin(x) [0-1]
	float a,b,x,y,h;
	a=0;
	b=1;
	h=(b-a)/10;
	while(x<=b)
	{
		y=asin(x);
		x+=h;
		cout<<"x= "<<x<<"      ";
		cout<<"y= "<<y<<endl;
	}
}
