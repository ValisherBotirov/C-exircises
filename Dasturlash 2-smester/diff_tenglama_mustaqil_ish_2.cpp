#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int x , y;
	int y1,y2,y3,y4;
	cout<<"x nol nuqtani kiriting (x0) => ";
	cin>>x;
	cout<<"x noldagi y ni qiymatini kiriting y : => ";
	cin>>y;
	cout<<"\n";
	y1 = 5 * pow(x,3) - 2*y/x;
	cout<<"y ni 1-tartibli hosilasidagi qiymati : "<<y1<<"\n\n";
	y2 = 15*x*x - 2*y1/x + 2*y/pow(x,2);
	cout<<"y ni 2-tartibli hosilasidagi qiymati : "<<y2<<"\n\n";
	y3 = 30*x - 2*y2/x + 4*y1/pow(x,2) - 4*y/pow(x,3);
	cout<<"y ni 3-tartibli hosilasidagi qiymati : "<<y3<<"\n\n";
	y4 = 30 - 2*y3/x + 6*y2/pow(x,2) - 8*y1/pow(x,3) - 4*y1/pow(x,6) + 12*y/pow(x,7);
	cout<<"y ni 4-tartibli hosilasidagi qiymati : "<<y4<<"\n\n";
	return 0;
}