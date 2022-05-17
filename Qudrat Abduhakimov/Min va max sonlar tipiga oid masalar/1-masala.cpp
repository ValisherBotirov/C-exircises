#include<iostream>
using namespace std;
int main(){
	int m;
	cin >> m;
	int max = 0;
	int a ;
	for(int i = 0 ; i < m ; i++){
		cin>>a;
		if(a > max){
			max = a;
		}
	}
	cout<<max<<" ";
	return 0;
}
