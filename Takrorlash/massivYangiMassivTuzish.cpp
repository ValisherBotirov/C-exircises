#include<bits/stdc++.h>
using namespace std;
int random(int a, int b){
	return a+rand()%(b-a+1);
}
int main(){
	int n=10;
	int a[n],b[n];

	for(int i=0;i<n;i++){
		a[i]=random(10,91);
		cout<<"a["<<i<<"]="<<a[i]<<endl;
	}
	
	for(int i=0;i<n;i++){
		if (a[i]%2==0){
			b[i]=a[i];
			cout<<"b["<<i<<"]="<<b[i]<<" ";
		}
		
	}
	
}
