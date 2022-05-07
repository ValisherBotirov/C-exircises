#include<iostream>
#include<stdio.h>
using namespace std;

int sum(int a, int b){
	return a + b;
}
int main(){
	int x,y;
	cout<<"x = ";cin>>x;
	cout<<"y = ";
	cin>>y;
	cout<<sum(x,y);

	return 0;
	
}


