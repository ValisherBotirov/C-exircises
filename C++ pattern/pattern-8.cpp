#include<iostream>
using namespace std;
int main(){
	int k = 2;
	for(int i = 1; i <= 6 ; i++){
		for(int j = 1 ; j <= 4; j++){
			cout<<k<<" ";
			k += 2;
		}
		cout<<endl;
	}
	return 0;
}