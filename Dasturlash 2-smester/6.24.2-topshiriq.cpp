#include <iostream> 
#include <cstddef> 
#include <valarray> 

using namespace std;
int main()
{
   valarray<int> arr(200);
    for (int i = 0; i < 100; ++i){
        arr[i] = i;
	}
	cout<<"Elements : "<<"\n\n";
	 for (int i = 0; i < 100; ++i){
        cout<<arr[i]<<" ";
	}
  	cout<<"\n\n";
    valarray<int> arr2 = arr[slice(0, 24, 4)];
    cout << "Natija : " <<"\n\n";
    for (size_t n = 0; n < arr2.size(); n++)
        cout << arr2[n]<<" ";
    	cout << "\n";
  
    return 0;
}