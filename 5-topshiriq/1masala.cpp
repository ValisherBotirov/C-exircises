#include <iostream>
#include <string>
using namespace std;
int main() {
	string text, word, natija;
	cout << "Ixtiyoriy satr kiriting:  ";
	getline(cin, text);
	cout << "\n Ixtiyoriy so'z kiriting: ";
	getline(cin, word);
	
	text.insert(0, " ");
	text.insert(0, word);
	
	cout << "Natija:   " << text << endl; 
	return 0;
}


