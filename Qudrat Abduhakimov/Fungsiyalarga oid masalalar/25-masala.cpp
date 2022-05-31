#include<iostream>
#include<math.h>
using namespace std;

float isPower(float x){
	while(x > 0){
		x = x / 5;
	}
	cout<<x;
}

int main(){
	float a;cin>>a;
	isPower(a);
	return 0;
}