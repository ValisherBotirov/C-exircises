#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
	cin >> a[i];
	
/*	for(int i = 0, j = n - 1; i < n / 2, j >= n / 2; i += 2, j -= 2)
	{
		cout << a[i] << " " << a[i + 1] << " ";
		if(i + 1 != j)
		cout << a[j] << " " << a[j - 1] << " ";
		
	}
*/
int p = 0, q = n - 1, f = 0;
for(int i = 0; i < (n + 1) / 2; i++)
{
	
    if(f % 4 == 0){
    
    cout << a[p] << " ";
    if(p != q)
	cout << a[p + 1] << " ";
    p += 2;
}
	else 
	{
		cout << a[q] << " ";
		if(p != q)
		cout << a[q - 1] << " ";
		q = q - 2;
	}
	
	f += 2;
	//q -= 2;
}	
	
	return 0;
}
