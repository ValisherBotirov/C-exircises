#include<bits/stdc++.h>
using namespace std;
int main(){
	int a=4,b,c=12;
	switch (b){
		case 1:a+=c;break;
		case 2:a+=3;break;
		case 3:a+=c*2;break;
		default:a+=c/5;
	};
	a+=c;
	cout<<a;
	
	
}
