#include<iostream>
#include<deque>
#include <time.h>
using namespace std;
int main(){
	srand(time(0));
	deque <int> numbers;
	int n;
	cout<<"n=";
	cin>>n;
	for(int i=1; i<=n; i++){
		numbers.push_back(rand()%30);
	}
	
	
	int min = *numbers.begin();
	deque<int> ::iterator k;
	for(auto it = numbers.begin(); it!=numbers.end(); ++it){
		cout<<*it<<" ";
		if(min > *it){
			min = *it;
			k = it;
		}
	}
	numbers.insert(k+1,0);
	+6
	cout<<"\n\nMin = > ";
	cout<<min;
	cout<<"\n\n";
	
	for(auto it = numbers.begin(); it!=numbers.end(); ++it){
		cout<<*it<<" ";
	}
	
	

	
	return 0;
}