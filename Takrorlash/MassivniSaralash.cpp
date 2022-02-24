#include<bits/stdc++.h>

using namespace std;

int random(int a,int b){
	return a+rand()%(b-a+1);
}

int main(){
	int n=10;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		a[i]=random(-10,10);
		cout<<"a["<<i<<"]="<<a[i]<<endl;
	}
	cout<<"Ikkinchi massiv:"<<endl;
	int c;
	for(int j=n-2;j>=0;j--){
		if(a[j]>a[j+1]){
			c=a[j];
			a[j]=a[j+1];
			a[j+1]=c;
			cout<<c;
		}
	}
	
}
