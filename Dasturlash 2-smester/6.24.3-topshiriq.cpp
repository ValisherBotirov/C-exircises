#include <iostream> 
#include <cstddef> 
#include <valarray> 
using namespace std;
int main(){
    valarray<int> arr(40);
	for (int i = 0; i < 15; ++i){
		arr[i] = i;
	}
	cout<<"Elements : "<<"\n";
	
	for (int i = 0; i < 15; ++i){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	size_t start = 0;
	size_t lengths[] = { 2, 5 };
	size_t strides[] = { 4, 4 };
		gslice func(
		start, valarray<size_t>(lengths, 2),
		valarray<size_t>(strides, 2));
		valarray<int> data = arr[func];
		cout << "Results : \n";
		for (int i = 0; i < data.size(); i++)
		cout << data[i] << " ";
		cout << "\n";

	return 0;
}
