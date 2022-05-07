#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int z,c=0,n,res;
	cin>>z;
	if(z==0) return puts("-1"),0;
	n = z > 0 ? z : -z;
	for(int i = 1;1LL *i*i <= n;i++)
	if(n%i ==0){
		c++;
		if(i*i != n) c++;	
	}
	if(c % 2 ==1 && z > 0) res = c+1;
	else res = c;
	cout<<res;
	return 0;
}
