#include<iostream>
using namespace std;
int main(){
	int n,m,max;
	cout<<"n= ";
	cin>>n;
	cout<<"m= ";
	cin>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"a["<<i<<"]"<<"["<<j<<"]= ";
			cin>>a[i][j];
		}
	}
	max=a[0][0];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]>max){
				max=a[i][j];
			}
		}
	}
	cout<<max;
}
