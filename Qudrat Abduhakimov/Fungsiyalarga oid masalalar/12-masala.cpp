#include<iostream>
#include<cmath>
using namespace std;
float ishora(int son){
	if(son > 0) return 1;
	else if(son < 0) return -1;
	else return 0;
}
int main(){
	int x;cin>>x;
	cout<<ishora(x);
	cout<<"\n\n";
	main();
}