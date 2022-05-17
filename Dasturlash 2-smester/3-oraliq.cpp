#include <iostream> 
#include <set> 
#include <string.h> 
#include <string> 
using namespace std; 
int main() { 
int n, k = 0; 
multiset <string> a; 
set <string>  b, c; 
string x; 
cout << "To'plam elementlari soni: ";  cin >> n; 
for (int i = 0; i <= n; i++) { 
getline(cin , x); 
a.insert(x); 
} 
for (auto i = a.begin(); i != a.end(); i++) { 
x = *i; 
for (int i = 0; i < x.length(); i++) { 
if (x[i] == ' ') 
k++; 
} 
if (k == 0) { 
c.insert(*i); 
} 
if (k == 1) { 
b.insert(*i); 
} 
} 
cout << "2-to'plam elementlari:\n"; 
for (auto i = b.begin(); i != b.end(); i++) {
cout <<*i<< endl; 
} 
cout << "3-to'plam elementlari:\n"; 
for (auto i = c.begin(); i != c.end(); i++) { 
cout << *i << endl; 
} 
for (string z : a) 
cout << z << " "<<z; 
cout << endl; 
return 0; 
}
