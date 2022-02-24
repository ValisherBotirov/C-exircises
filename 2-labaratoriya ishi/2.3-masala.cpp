#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float i,R,y;
	for(i=1;i<=13;i++){
		for(R=1;R<=14;R++){
			y+=(pow(-1,i)*cos(i+R)+5)/(5*i+pow(7,(-R))+pow(i,(-R)));
		}
	}
	cout<<"y= "<<y;
}
