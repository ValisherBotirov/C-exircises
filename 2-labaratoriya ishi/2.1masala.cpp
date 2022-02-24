#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float y,n;
	y=1;
	for(float n=1;n<=8;n++){
		y*=(n+6)/(n*n+4*n+1);
		cout<<"y= "<<y<<endl;
	}
	
	
}
