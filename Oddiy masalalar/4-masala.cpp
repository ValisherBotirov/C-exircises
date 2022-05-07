#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int x,y,a,b,c;
	cout<<"x= ";cin>>x;
	cout<<"a= ";cin>>a;
	cout<<"b= ";cin>>b;
	cout<<"c= ";cin>>c;
	
	y=pow((sqrt(a*b*x)/sqrt(b*b-4*a*c)),1/3) + abs(x+1)/abs(a-b);
	cout<<"y= "<<y;
	
	return 0;
}
