#include<iostream>
using namespace std;
int main(){
	int n=0; // o`yinchilar soni
	int a[10]={120,125,130,140,150,181,185,187,189,195};
	for(int i=0;i<10;i++){
		if(a[i]>180 && a[i]<190){
			cout<<"a["<<i<<"]="<<a[i]<<endl;
			n++;
		}
		
	}
	cout<<"O'yinchilar soni = "<<n;
}
