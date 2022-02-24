//Ushbu dasturda n=2 bo’lganda, ekranda s=?.

//int n,s,i;

//cout<<"n=";cin>>n; s=1;

//for(i=1;i<=n;i=i+1){cout<<3<<"*";

//s=s*3;}

//cout<<"="<<s;
#include<iostream>
using namespace std;
int main(){
	int n,s,i;
	cout<<"n= ";
	cin>>n;
	s=1;
	for (int i=1;i<=n;i=i+1){
		cout<<3<<"*";
		s=s*3;
	}
	cout<<"="<<s;
}
