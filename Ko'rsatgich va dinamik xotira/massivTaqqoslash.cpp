#include<iostream>
using namespace std;
int main()
{
	int n,max;
	cout<<"n= "; cin>>n;
	int a[n];
	max=a[0];
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"] = ";cin>>a[i];
		if(a[i]>max){
			max=a[i];
		}
	}
	cout<<"Eng katta element "<<max;
}
