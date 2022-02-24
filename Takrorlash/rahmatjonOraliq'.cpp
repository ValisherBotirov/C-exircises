#include<bits/stdc++.h>
using namespace std;
int main(){
	int i=2,a=3,b=8;
	while(i<=b){
		i=i+2;
		if(i%2 == 0){
			a+=a;
		}
		if(i%2 == 0 && i<5){
			a=a+b;
		
		}
			else a=a-b;
	}
	cout<<a;
}
