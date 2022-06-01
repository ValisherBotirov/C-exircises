#include <iostream> 
#include <cstddef> 
#include <valarray> 

using namespace std;
int main()
{
   valarray<int> arr(21);
    
    for (int i = 0; i < 20; ++i){
        arr[i] = i;
	}
	
	cout<<"valarray elementlari : "<<"\n\n";
	
	 for (int i = 0; i < 20; ++i){
        cout<<arr[i]<<" ";
	}
	
  	cout<<"\n\n";
   
    valarray<int> arr2 = arr[slice(0, 4, 5)];
  	// 0-indexdan boshlab har 5ta elementini oladi 
	// 4 marta takrorlanadi
    
    cout << "Natija : " <<"\n\n";
    for (size_t n = 0; n < arr2.size(); n++)
        cout << arr2[n]<<" ";
    	cout << "\n";
  
    return 0;
}