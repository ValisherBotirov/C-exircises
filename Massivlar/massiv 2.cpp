#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;

int myrand(int a, int b){
	return a+rand()%(b-a+1);
}

int main(){
	int n,m,i;
	cout<<"n="; cin>>n;
	cout<<"m="; cin>>m;
	int a[n][m];
	float s=0;
	
	for(int i1=0; i1<n; i1++){
		for(int i2=0; i2<m; i2++){
			a[i1][i2] = myrand(-10,10);  
			cout<<setw(4)<<a[i1][i2];  
						
		}
		cout<<endl;
	}
	
	int max = a[0][0],min = a[0][0],maxs = 0,mins =0, nol=0,q1,w1,q2,w2;
	long int maxSum=1,minSum=0;
	int manfiy[n*m], musbat[n*m];
	for(int i1=0; i1<n; i1++){
		for(int i2=0; i2<m; i2++){
			s = s+a[i1][i2]; //yigindisi
			if(a[i1][i2]>0){
				maxs +=1;  //Musbatlar soni
				maxSum *= a[i1][i2]; //Musbatlar kopaytmasi
				musbat[maxs] = a[i1][i2];
			}else if(a[i1][i2]<0){
				mins +=1; //Manfiylar soni
				minSum += a[i1][i2]; //Manfiylarlar yigindisi
				manfiy[mins]  = a[i1][i2];
			}else{
				nol += 1;
			}
			
			if(a[i1][i2]>max){ 
				max = a[i1][i2];
				q1 = i1; w1 = i2;
			}
			if(a[i1][i2]<min){ 
				min = a[i1][i2];
				q2 = i1; w2 = i2;
			}
						
		}
	}
		
	
	
	cout<<"Massivlar yigindisi "<<s<<endl;
	cout<<"Musbatlar soni "<<maxs<<endl;
	cout<<"Manfiylar soni "<<mins<<endl;
	cout<<"Nollar soni "<<nol<<endl;
	cout<<"Max a["<<q1<<"]["<<w1<<"]="<<max<<endl;
	cout<<"Min a["<<q2<<"]["<<w2<<"]="<<min<<endl;
	cout<<"Musbatlar ko'paytmasi "<<abs(maxSum)<<endl;
	cout<<"Manfiylar yig'indisi "<<minSum<<endl;
	cout<<"O'rta arfmetik "<<s/(n*m)<<endl;
	
	for(int l=1; l<=mins; l++) cout<<" "<<manfiy[l]; cout<<endl;
	for(int l=1; l<=maxs; l++) cout<<" "<<musbat[l]; cout<<endl;
	
	
		
	
	
}
