#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i =0 ; i< n ; i++){
		cin>>a[i];
	}
	int d = a[1]-a[0];
	int l = 0;
	for(int i = 1 ; i < n -1 ; i++){
		if(a[i+1]-a[i] != d ){
			l = 1;break;
		}
	}
	if(l==0) cout<<d;
	else cout<<0;
	return 0;
}
