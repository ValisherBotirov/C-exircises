#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	float b[n];
	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}
	
	for(int i = 0 ; i < n ; i++){
		float sum = 0;
		for(int j=i;j < n; j++)
		{
			sum += a[j];
		}
		b[i] = sum / (n - i);
	}
	for(int i = 0; i < n; i++)
	cout << b[i] << " ";
	return 0;
}
