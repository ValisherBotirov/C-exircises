#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
	char a[100];
	cin.getline(a,sizeof(a));
	for(int i=0;i<=strlen(a);i++){
		tolower(a[i]);
	}
	cout<<a;
}
