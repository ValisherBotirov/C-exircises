#include <bits/stdc++.h>

using namespace std;

int main(){
	int k = 0;
	string text = "";
	
	cout << "Print your text here: ";
	getline(cin, text);
	Stringstream iss(text);
	cout << "k = ";
	cin >> k;
	while (iss >> text){
		cout << text << " ";
	}
	
	return 0;
}
