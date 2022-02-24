#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;
int main()
{
	char a[100];
	int n,s=0;
	cin.getline(a,sizeof(a));
	n=strlen(a);
	//raqamarni ajratib ko'rsatadi
/*	for(int i=0;i<=n;i++)
	{
		if(isdigit(a[i]))
		cout<<a[i];
	}*/
	
	for(int i=0;i<=n;i++)
	{
		if(isdigit(a[i]))
		s++;
	}
	cout<<"Raqamlar soni : "<<s;
}
