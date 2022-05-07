#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue <int> a;
	int n, k;
	cout<<"Elementlar sonini kiriting n = ";
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cout<<i+1<<" -elementni kiriting : ";
		cin >> k;
		a.push(k);
		
	}
	int sum = 0;
	while(!(a.empty()))
	{
		 int x = a.front();
		 if(x % 2 == 1)
		 sum += x;
		a.pop();
	}
	
	cout << sum;
	
	
	return 0;
}

