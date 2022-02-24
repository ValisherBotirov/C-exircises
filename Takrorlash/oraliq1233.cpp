#include<bits/stdc++.h>
using namespace std;
int main(){
	int k=0,s=100;
	int m=12;
	if(m%2!=0)
	{
		s+=m;m--;
	}
	else 
	{
		s-=m;
		m++;
	}
	cout<<s;
}
