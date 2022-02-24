#include<bits/stdc++.h>
using namespace std;
int random(int a, int b){
	return a+rand()%(b-a+1);
}
int main(){
	int n=10,max;
	int a[n];

	for(int i=0;i<n;i++){
		a[i]=random(10,91);
		cout<<"a["<<i<<"]="<<a[i]<<endl;
	}
		max=a[0];
	for (int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	cout<<max;
}
