#include<iostream>
using namespace std;
int main()
{
	int n,m,max,min;
	float arf;
	cout<<"n= "; cin>>n;
	cout<<"m= "; cin>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"a["<<i<<"]["<<j<<"]= ";
			cin>>a[i][j];
		}
	}
	max=a[0][0];
	min=a[0][0];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		if(a[i][j]>max)
		{
			max=a[i][j];
			
		}	
		
		if(a[i][j]<min){
			min=a[i][j];
		}
		}
		
	}
	cout<<"Max= "<<max<<endl;
	cout<<"Min= "<<min<<endl;
	arf=(max+min)/2;
	cout<<"O`rta arifmetigi: "<<arf;
	
}
