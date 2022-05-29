#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;
int main()
{
  vector <int > v1 ;
  vector <int > v2 ;
  vector <int > ::iterator it;

  int n;
  cout << "n = ";
  cin >> n;
  cout << endl;
  int random1;
  

  for (int i = 0; i < n; i++){
    random1 = rand() % 10;
    v1.push_back(random1);
  }

  cout << "kontainer elementlari : =>  ";
  for (auto i : v1){
    cout << i << " ";
  }
  cout << "\n\n";

  cout << "Search qilmoqchi bo\lgan raqam kiriting : " << "\n";
  int search;
  cin >> search;
  v2.push_back(search);

  cout << "\n\n";

  it = std::search(v1.begin(), v1.end(), v2.begin(), v2.end());
  if (it != v1.end()) {
    cout << "Qidirayotgan elementingizni tartib raqami " << (it - v1.begin() + 1);
  }
  else {
    cout << "Bunday elemet mavjud emas ";
  }
  
  cout << "\n\n";
  system("pause");
  return 0;
}