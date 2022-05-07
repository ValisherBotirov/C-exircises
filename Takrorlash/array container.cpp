#include<iostream>
#include<array>
using namespace std;
int main(){
	array<int , 30> full;
	
	for(int i=0; i<30; i++){
		full[i] = rand()%30<<" ";
		cout<<full.at(i);
	}
	
	return 0;
}
