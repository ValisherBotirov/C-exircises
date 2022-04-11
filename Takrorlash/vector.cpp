#include <bits/stdc++.h>

using namespace std;

int main()
{
	//int n;
	//cin >> n;
	//vector <string> a;
	string a;
	cin >> a;
	//string temp;
	
//	for(int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		a.push_back(temp);
//	}
	int sum = 0;
	for(int i = 0; i < a.size(); i++)
	{
		string l = a[i];
		int k = stoi(l);
		sum = sum + k;
	}
    //sum += int(a[i]) - 48;
	cout << sum;
	
	return 0;
}
