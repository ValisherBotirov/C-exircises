#include<iostream>
using namespace std;
int main()
{
	int x1,x2,y1,y2,a,b,s,p;
	cin>>x1>>x2>>y1>>y2;
	if(x2>x1){
		a=x2-x1;
	}
	else a=x1-x2;
	if(y2>y1){
		b=y2-y1;
	}
	else b=y1-y2;
	s=a*b;
	p=2*(a+b);
	cout<<s<<p;
	
	
}
