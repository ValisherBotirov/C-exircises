#include<bits/stdc++.h>

using namespace std;
int main(){
	int n, son=0 ;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		son=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				son++;
			}
		}
		if(son==2){
			cout<<i<<" ";
		}
	}
}

