#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double y,s=1,n=1,x;
	int fac=1;
	cout<<"n= "; cin>>n;
	for(int i=1;i<=n;i++){
		fac*=i;
	}
	do {
		s = s + (cos(n*M_PI/4)*pow(x,n))/fac;
		n= n+1;
	}while(n<=20);
	y=pow((M_E),cos(M_PI/4))*cos(sin(M_PI/4));
	cout<<"s= "<<s<<endl;
	cout<<"y= "<<y;
}
