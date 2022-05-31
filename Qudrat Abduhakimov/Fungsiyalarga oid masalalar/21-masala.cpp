#include<iostream>
using namespace std;
int sumRange(int a , int b){
	int sum = 0;
	for(int i = a ; i < b ; i++){
		sum += i;
	}
	
   if(b > a) return sum - a;
   else return 0;
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<sumRange(a,b);
	return 0;
}