#include<iostream>
using namespace std;
int main(){
	long long s = 0, mn =1e9,mx=1,x;
	for(int i=0;i<5;i++){
		cin>>x;
		s+=x;
		mn = min(mn,x);
		mx = max(mx,x);
	}
	cout<<s-mx<<" "<<s-mn;
	return 0;
}
