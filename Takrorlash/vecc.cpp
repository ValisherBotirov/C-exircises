#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	int n;
	cout<<"Elementlar sonini kiriting n = ";
	cin >> n;
	vector <int> a;
	int k;
	for(int i = 0; i < n; i++)
	{
		cout<<i+1<<"-elementni kiriting : ";
		cin >> k;
		a.push_back(k);
	}
	vector<int>::iterator i = a.begin();
	vector<int>::iterator j = a.begin();
	int max = a[0]; 
	for(i = a.begin(); i != a.end(); i++)
	{
		if(*i > max)
		{
			max = *i;
			j = i;
		}
	}
	a.insert(j + 1, 0);
	
	for(int h = 0; h < n + 1; h++)
	{
		cout << a[h] << " ";
	}
	
	
	
	
	
	return 0;
}
