#include<bits/stdc++.h>
using namespace std;

int random(int a,int b){
	return a+rand()%(b-a+1);
}

int main(){
	int n=10;
	int a[n];
	for (int i=0;i<n;i++){
		a[i]=random(1,20);
	}
	
	for (int i=0;i<n;i++){
		cout<<"a["<<i<<"]="<<a[i]<<endl;
	}
	
}
