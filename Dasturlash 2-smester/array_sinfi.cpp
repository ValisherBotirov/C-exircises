#include<iostream>
#include<array>
using namespace std;
int main(){
	array<int, 5> a = {1,2,3,5,4};
	cout<<a.size()<<endl;
	cout<<a.front()<<endl;

	for(auto & s : a){
		cout<<s<<" ";
	}
		//cout<<sort(a.begin(),a.end());
	return 0;
}