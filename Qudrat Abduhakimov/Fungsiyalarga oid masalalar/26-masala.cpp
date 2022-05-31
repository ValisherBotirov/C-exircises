#include<iostream>
#include<cmath>
using namespace std;

float isSquary (float x){
	if(sqrt(x) == int(sqrt(x))){
		cout<<"true";
	} 
	else cout<<"false";
}

int main(){
	int x;cin>>x;
	isSquary(x);
}