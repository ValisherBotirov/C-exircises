#include<iostream>
using namespace std;

int InverDigit(int c){
	while(c > 0){
	int	sum = c % 10;
		c  = c / 10;
		cout<<sum;
	}
}
int  main(){
int a,b,c;
cin>>a>>b>>c;
InverDigit(a);
InverDigit(b);
InverDigit(c);
}