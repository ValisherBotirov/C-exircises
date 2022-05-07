//14-bilet
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int x,y,a,b;
	cout<<"x= ";
	cin>>x;
	cout<<"a= ";
	cin>>a;
	cout<<"b= ";
	cin>>b;
	y = (2*x+3*cos(x+1))/(abs(1+pow((x+1),2)+a*b*x*x));
	cout<<"y= "<<y;
	return 0;
}
