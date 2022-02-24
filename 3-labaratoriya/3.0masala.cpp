#include <iostream>
using namespace std;

bool maxsusmi(int a, int ai, int aj, int **arr, int n, int m){
	// bunda arr[n][m], a=arr[ai][aj]
	int i, S=0;
	for(i=0; i<n; i++) S+=arr[i][aj];
	S-=a;
	if(a<=S) return false;
	for(i=0; i<m; i++){
		if(i<aj && arr[ai][i]>=a) return false;
		if(i>aj && arr[ai][i]<=a) return false;
	}
	return true;
}

int main(){
	int n, m, k=0, i, j;
	cout<<"Massiv qatorlar sonini kiriting: n = "; cin>>n;
	cout<<"Massiv ustunlar sonini kiriting: m = "; cin>>m;
	int **S;
	S = new int *[n];
	for(i=0; i<n; i++){
		S[i] = new int[m];
		cout<<i<<"-qator elementlarini kiriting: ";
		for(j=0; j<m; j++) cin>>S[i][j];
	}
	cout<<"__________________________\n";
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			cout<<S[i][j]<<"  ";
			if(maxsusmi(S[i][j], i, j, S, n, m))k++;
		}
		cout<<endl;
	}
	cout<<"__________________________\n\n";
	cout<<"Massivdagi maxsus elementlar soni k = "<<k<<" ta\n";
	for(i=0; i<n; i++) delete [] S[i];
	return 0;
}

