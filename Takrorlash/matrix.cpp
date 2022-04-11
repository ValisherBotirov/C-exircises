#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
    int a[n][m], i, j, b[n][m];
    for( i = 0; i < n; i++)
    {
    	for( j = 0; j < m; j++)
    	{
    		cin >> a[i][j];
    	}
    }
    for( i = 0; i < n; i++)
    {
    	for( j = 0; j < m; j++)
    	{
    		cin >> b[i][j];
    	}
    }
    int c[n][m];
    for( i = 0; i < n; i++)
    {
    	for( j = 0; j < m; j++)
    	{
    		c[i][j] = 0;
    	    for(int x = 0; x < m; x++)
    	    {
    	    	c[i][j]  += a[i][x] * b[x][j];
    	    }
    	    cout << c[i][j] << " ";
    	}
    	cout << endl;
    
    }
	
	
	return 0;
}
