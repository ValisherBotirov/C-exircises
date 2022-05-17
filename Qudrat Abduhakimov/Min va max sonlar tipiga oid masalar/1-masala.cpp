#include<iostream>
using namespace std;
int main(){
	int m;
	cin >> m;
	int a ;
	cin>>a;
	int max = a;
	for(int i = 1 ; i < m ; i++){
		cin>>a;
		if(a > max){
			max = a;
		}
	}
	cout<<max<<" ";
	return 0;
}
