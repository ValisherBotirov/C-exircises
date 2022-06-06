#include<iostream>
using namespace std;
int main(){
	int k = 0;
	for(int i = 1 ; i <= 5 ; i++){
		for(int j = 1 ; j<= 5 ; j++){
			cout<<k+1<<" ";
			k+=5;
		}
		k = i;
		cout<<endl;
	}
	return 0;
}