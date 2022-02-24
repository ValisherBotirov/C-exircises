#include <iostream>
#include <string>
using namespace std;
int main() {
	char txt[100] = "DIF 315-21 gruh talabasi Botirov Valisher";
	string str = "";
	int n, count = 0;
	cout << "Berilgan matn:  ";
	cout << txt << endl; 
	str = str + txt;
	cout << "\nNechanchi so'zni katta harflarda chiqarib beray ? : "; 
	cin >> n;
	int leng = str.length();
	for (int i = 0; i < leng; i++) {
		if(str[i] == ' ') {
			count++;
		}
		if(n-1 == count) {
			if(str[i] >= 'a' && str[i] <= 'z') 
            	str[i] = str[i] - 32;
		}
    }
	cout << "\nNatija:   " << str << endl; 
	return 0;
}

