#include <iostream> 
#include <cstddef> 
#include <valarray> 

using namespace std;

int main(){
	
    valarray<int> arr(30);
	for (int i = 0; i < 20; ++i){
		arr[i] = i;
	}
	cout<<"valarray elementlari : "<<"\n\n";
	
	for (int i = 0; i < 20; ++i){
		cout<<arr[i]<<" ";
	}
	
	cout<<"\n\n";
	
	size_t start = 0;
	size_t lengths[] = { 2, 5 };
	size_t strides[] = { 5, 5 };

	
		gslice mygslice(
		start, valarray<size_t>(lengths, 2),
		valarray<size_t>(strides, 2));
	
	valarray<int> data = arr[mygslice];

	cout << "gslice natijasi : \n\n";

	
	for (int i = 0; i < data.size(); i++)
		cout << data[i] << " ";
		cout << "\n";

	return 0;
}
