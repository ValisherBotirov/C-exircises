#include<iostream>
#include<list>
using namespace std;
int main(){
	list <int> numbers;
	
	for(int i = 0 ; i < 10 ; i++){
		int random = rand() % 30;
		numbers.push_back(random);
	}
	
	cout<<"list elementlari =>  ";
	
	for(auto i : numbers){
		cout<<i<<" ";
	}
	cout<<"\n\n";
	
	list<int>::iterator it;
	
	int max = numbers.front();
    for (it = numbers.begin(); it != numbers.end(); ++it){
    	if(*it > max){
    		max = *it;
		}
	}
	
	int min = numbers.front();
	 for (it = numbers.begin(); it != numbers.end(); ++it){
    	if(*it < min){
    		min = *it;
		}
	}
	
	cout<<"Listning eng katta elementi : "<<max<<"\n";
	cout<<"Listning eng kichik elementi : "<<min<<"\n";
    
	
	return 0;
}