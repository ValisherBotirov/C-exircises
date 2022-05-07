//7-bilet
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int x,y;
	double e=2.71;
	cout<<"x= ";
	cin>>x;
	
	y = (2.15*cos(x)-0.45*acos(pow(x,3)))/(3.4*sqrt(x*pow(e,cos(x))+pow(log(3.9+pow(x,3)),2)));
	cout<<"y= "<<y;
	
	return 0;
}
