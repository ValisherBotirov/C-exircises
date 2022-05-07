#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0 ; i < n ;i++){
		cin>>a[i];
	}
	
	int p = 0 , q = n - 1 ,f = 0;  //f bu index
	for(int i = 0 ; i < (n + 1) / 2; i++){
		if(f % 4 == 0){
			cout<<a[p]<<" ";
			if(p!=q){
			cout<<a[p+1]<<" ";
			}
			p+=2;
		}
		else {
			cout<<a[q]<<" ";
			if(q!=p){	
			cout<<a[q-1]<<" ";
			}
			q-=2;
		}	
		f+=2;
	}
	main();
	return 0;
}
