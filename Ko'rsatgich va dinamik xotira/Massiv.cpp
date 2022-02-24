#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	int b[5]={6,7,8,9,10};
	int c[10];
	for(int i=0;i<5;i++){
		c[i]=a[i]+b[i];
		cout<<c[i]<<" ";
	}

}
