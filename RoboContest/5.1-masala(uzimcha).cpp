#include<iostream>

using namespace std;

int main(){
	int z,count = 0,res = 0 ,z1;
	cin>>z;
	if(z == 0) cout<<-1;break;
	z1 = z > 0 ? z : -z;
	for(int i = 1 ; i <= z1 ; i++){
		if(z % i == 0){
			count++;
		}
	}
	cout<<count<<endl;
	for(int i = 1 ; i <= z1 ; i++){
		if(i * i == z && z > 0){
			res=count+1;
		}
	}
	cout<<res;
	
	main();
	return 0;
}
