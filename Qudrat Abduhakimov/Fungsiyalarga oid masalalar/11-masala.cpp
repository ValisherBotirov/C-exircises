#include<iostream>
using namespace std;
int minMax (int a , int b){
	int min , max;
	if(a > b){
		max = a;
		min = b;	
	}
	else {
		max = b;
		min = a;
	}
	cout<<"kattasi : "<<max<<" kichigi : "<<min;
}

int main(){
	int a,b;
	cin>>a>>b;
	minMax(a,b);
}