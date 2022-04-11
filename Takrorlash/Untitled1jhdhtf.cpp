#include <iostream>
using namespace std;
void daraja(int n)
{
	long k = 1;
	for(int i = 1; i <= n; i++)
		k = k * 2;	
	cout << "Natija : " << k << endl;
}
int main()
{
int n;
cout << "n ni kiriting : " << endl;

cin >> n;
daraja(n);
   
    return 0;
}
