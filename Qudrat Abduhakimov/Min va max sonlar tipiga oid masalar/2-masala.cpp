#include<iostream>

using namespace std;

int main(){
	int m ;
	cout<<"m = ";cin>>m;
	int a,b;
	cout<<"a[1] = ";cin>>a;
	cout<<"b[1] = ";cin>>b;
	
	int min = a * b;
	
	
	for(int i = 1 ; i < m ; i++){
		cout<<"a["<<i+1<<"] = ";cin>>a;
		cout<<"b["<<i+1<<"] = ";cin>>b;
		
		if(min > a * b){
			min = a*b;
		}
		
	}
		cout<<"Min s ="<<min;
		return 0;
	}
	
