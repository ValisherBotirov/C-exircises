#include<iostream>
using namespace std;
int main(){
	int k = 1;
	for(int i = 1 ; i <= 5 ; i++){
		for(int j = 1 ; j <=  5; j++){
			cout<<k*j<<" ";
		}
		k = i+1;
		cout<<endl;
	}
	return 0;
}