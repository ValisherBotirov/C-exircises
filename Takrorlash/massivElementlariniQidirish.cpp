#include<iostream>
using namespace std;
int main(){
	int x=5,n=10;
	int a[10]={1,2,3,4,5,6,7,8,9};
	for(int i=0;i<n;i++){
		if(a[i]==x){
			cout<<a[i];
			break;
		}
		else cout<<"Bunday son mavjud emas";
	}
	
}
