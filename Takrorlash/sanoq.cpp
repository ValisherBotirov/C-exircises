#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
   int n;
   cin >> n;
   int a[n];
   for(int i = 0; i < n; i++)
   cin >> a[i];
   
   sort(a, a + n);
   int sanoq  = 0, count = 0, son = a[0];
   for(int i = 0; i < n; i = i + count + 1)
   {
   	int count = 0;
   	for(int j = i; j < n - 1; j++)
   	{
   		if(a[j] == a[j + 1])
   		count++;
   		else break;
   	}
   	if(sanoq < count + 1)
   	{
   		sanoq = count + 1;
   		son = a[i];
   	}
   	
   }
   cout << son;


  return 0;	
}
