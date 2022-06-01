#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> vec1;
	vector<int>::iterator p;

	for (int i = 0; i < 8; i++) {
		vec1.push_back(i + 10);
	}
	
	cout<<"Vector elementlari :"<<"\n\n";
	for(p = vec1.begin(); p < vec1.end(); p++) {
		cout << *p << " ";
	}
	cout << "\n\n";

	cout << "Vektor elementlarining 5 - index va 7 - index reverse qilindi : \n\n";
	reverse(vec1.begin() + 5, vec1.begin() + 8);

	for (p = vec1.begin(); p < vec1.end(); p++) {
		cout << *p << " ";
	}
	cout << "\n";
	return 0;
}
