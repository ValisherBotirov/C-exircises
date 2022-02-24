#include<iostream>
using namespace std;
int main()
{
	int i,y=1,n;
	cin>>n;
	for(int i=1;i<=n;i++){
		y*=i;
	}
	cout<<y;
	main();
}
