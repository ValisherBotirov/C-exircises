#include<iostream>
#include<cmath>

using namespace std;

int main(){
	long long n;
	cin>>n;
	int count,res = 0;
	for(int i = 1 ; i <= sqrt(n) ; i++){
		count = 0;
		for(int j = 1 ; j <= i ; j+=2){
			if(i % j == 0) count++;
			
		}
		if(count == 2){
			if(i * i * 1LL <= n){
				res++;
			}
		}
	} 
	cout<<res;
	
	
	return 0;
}
