#include <iostream>
#include <queue>
#include <time.h>
using namespace std;

int main() {
  queue<int> a;
  int temp;
  srand(time(0));
  cout<<"Navbat elementlari : "<<endl;
  for(int i=0; i<6; i++){
    temp = 1+rand()%20;
    a.push(temp);
    cout<<temp<<" ";
  }
  
  cout<<"\n\n";
  
  int result = 1;
  
  while(!a.empty()){
   result *= a.front();
    a.pop();
  }

	cout<<"Elementlar ko'paytmasi : "<<result;
  return 0;
}
