#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"n = ";cin>>n;
	int m,v;
	cout<<"m1 = ";cin>>m;
	cout<<"v1 = ";cin>>v;
	int max = m / v;
	for(int i = 1 ; i < m ; i++){
		cout<<"m["<<i+1<<"] = ";cin>>m;
		cout<<"v["<<i+1<<"] = ";cin>>v;
		
		if(m / v > max){
			max = m / v;
		}
	}
	cout<<"max = "<<max;
	return 0;
}