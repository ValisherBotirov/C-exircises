#include<iostream>
using namespace std;
namespace func{
	void sum(int a , int b){
		cout<<a+b;
	}
}

int main(){
	int x,y;
	cout<<"x = ";cin>>x;
	cout<<"y = ";
	cin>>y;
	
	func::sum(x,y);

}
