#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[46] = {0,1};
	for(int i = 2 ; i < 45 ; i++){
		a[i] = a[i-2] + a[i-1];
		
		}
	
	cout<<a[n]*2;
	
	return 0;
}
