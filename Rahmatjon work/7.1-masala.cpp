#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y;
	double S=1,P=1;
	cout<<"x= ";
	cin>>x;
	cout<<"y= ";
	cin>>y;
	for(int n=1;n<=x;n++){
		S=S+1/(5-17*n+pow(n,3));
	}
	cout<<"S= "<<S<<endl;
	for(int m=1;m<=y;m++){
		P=P*(sqrt(abs(m-5)+1))/(pow(m,2)+4*m+(-1));
	}
	cout<<"P= "<<P;
	
}
