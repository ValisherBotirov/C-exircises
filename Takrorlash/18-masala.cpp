#include<iostream>

using namespace std;

int main(){
	int endElement;
	int n;
	cin >> n;
	int arr[n];
	
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
	int min = 0;
	endElement = arr[n-1];
	for(int i = 0; i < n-1 ; i++){
		if(arr[i]<endElement){
			min = arr[i];break;
		}
	
	}
	cout<<min;
}
