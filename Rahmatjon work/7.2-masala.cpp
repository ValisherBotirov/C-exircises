#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,m;
	double s=0,s2=1;
	cout<<"n= ";
	cin>>n;
	cout<<"m= ";
	cin>>m;
	for(int i=3;i<=n;i++){
		for(int j=2;j<=m;j++){
			s=s+(2*i+j*j);
			s2=s*s2;
		}
	}		
	cout<<"s= "<<s2;
	
}
 
