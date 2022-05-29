#include<iostream>
#include<list>
using namespace std;
int main(){
	list<int> numbers;
	for(int i = 0 ; i < 10 ; i++){	
	int r = rand() % 20;
	numbers.push_back(r);
	}
	for(int i : numbers){
		cout<<i<<" ";
	}
	return 0;
}