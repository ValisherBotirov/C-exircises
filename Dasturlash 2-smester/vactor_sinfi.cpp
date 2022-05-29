#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v(4);
	v[0] = 12;
	for(int i = 0 ; i < 4; i++){
		v[i] = i;
	}
	v.push_back(4);
	
	cout<<v.front()<<endl;
	for(auto & i : v){
		cout<<i<<" ";
	}
}