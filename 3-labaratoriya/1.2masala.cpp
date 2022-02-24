#include<iostream>
using namespace std;
int ishora(int a)
{
	if(a<0) cout<<"-1"<<endl;
	else if(a>0) cout<<"1"<<endl;
	else cout<<"0"<<endl;
}
int main()
{
	int a;
	cout<<"Ixtiyoriy son kiriting: ";
	cin>>a;
	a=ishora(a);
	main();
}
