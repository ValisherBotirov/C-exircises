#include<iostream>
using namespace std;

int yuza1(int a,int b)
{
	int s1=a*b;
	return s1;
	
}
int yuza2(int a1,int b1)
{
	int s2=a1*b1;
	return s2;
}
int main()
{
	int a,b,s1;
	cout<<"a va b ni kiriting: ";
	cin>>a>>b;
	s1=yuza1(a,b);
	cout<<"s1= "<<s1<<endl;
	
	int a1,b1,s2;
	cout<<"a1 va b1 ni kiriting: ";
	cin>>a1>>b1;
	s2=yuza2(a1,b1);
	cout<<"s2= "<<s2;
}
