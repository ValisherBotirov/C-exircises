#include<iostream>
#include<map>
using namespace std;
int main(){
	
	multimap<int, int> mapElement; 
	multimap<int, int>::iterator itr;
	
    mapElement.insert(pair<int, int>(1, 40));
    mapElement.insert(pair<int, int>(2, 30));
    mapElement.insert(pair<int, int>(3, 60));
    mapElement.insert(pair<int, int>(6, 50));
    mapElement.insert(pair<int, int>(7, 10));
    cout << "\nMultimap item => mepElement : \n";
    cout << "\tIndexsi\tQiymati\n";
    for (itr = mapElement.begin(); itr != mapElement.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;
	
	multimap <int ,int> calcMap;
	int n;
	cout<<"n= ";
	cin>>n;
	cout<<"kontainer elementlari : ";
	for(int i = 1 ; i <= n ; i++){
		int random = 1 + rand() % 10;
		calcMap.insert(pair<int,int>(i,random)); 
		cout<<random<<" ";
	}
	cout<<"\n\n";
	int sum = 0;
	int mult = 1;
	
	for(auto it = calcMap.begin() ; it != calcMap.end() ; ++it ){
		cout<<"["<<it -> first <<"] = ";
		cout<<it -> second <<"\n";
		sum += it -> second;
		mult *= it -> second;
	}
	
	cout<<"\n Elementlar yig'indisi : "<<sum;
	cout<<"\n Elementlar ko'paytmasi : "<<mult;
}