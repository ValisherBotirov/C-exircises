#include<iostream>
using namespace std;
int main(){
	int b;cin>>b;
	int son;
	
	for(int i = 0 ; i < 10 ; i++){
		cin>>son;
		if(son > b){
			cout<<son;break;
		}
		else {
			cout<<00;
		}
	}

}