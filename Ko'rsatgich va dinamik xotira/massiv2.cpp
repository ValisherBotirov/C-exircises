#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout<<"n= "; cin>>n;
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[n];
	}
	for(int i=0;i<n;i++){
		cout<<"b["<<i<<"] = ";
		cin>>b[n];
	}
	for(int i=0; i<n; i++){
		c[i]=a[i]+b[i];
		cout<<"c["<<i<<"] = "<<c[i]<<endl;
	}
	return 0;
}
