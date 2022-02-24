#include<bits/stdc++.h>
using namespace std;
int random(int a, int b){
	return a+rand()%(b-a+1);
}
int main(){
	int n=5;
	int a[n];
	float arf=0,sum=0;
	for(int i=0;i<n;i++){
		a[i]=random(1,10);
	}
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]="<<a[i]<<endl;
	}
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	cout<<"sum="<<sum<<endl;
    arf=sum/n;
	cout<<arf;
	
}
