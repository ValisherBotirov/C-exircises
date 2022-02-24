#include <iostream>
using namespace std;
int main(){
	int n, i, p=1;
	cout<<"n = "; cin>>n;
	int *arr;
	arr = new int[n];
	for(i=0; i<n; i++){
		cout<<"arr["<<i<<"] = ";
		 cin>>arr[i];
		if(arr[i]%2!=0){
			p*=arr[i];
		} 	
	}
	cout<<"Toq elementlar ko'paytmasi p = "<<p<<endl;
	return 0;
}

