#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,x,y,z;
	cout<<"Uch xonali son kiriting : ";
	cin>>a;
	x=a%10; //birlar xonasidagi son
	y=a/100; //yuzlar xonasidagi son
	z=(a%100)/10; //o'nlar xonasidagi son
	cout<<x<<z<<y;
	
}
