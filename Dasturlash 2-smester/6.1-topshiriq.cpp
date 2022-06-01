#include <iostream>
#include <valarray>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main (){
	valarray<int> arr (18);
	cout<<"valarray sinfidagi  massiv elementlari : \n\n";
	
	for (int i = 0; i < arr.size(); i++)
	{
		int randomSon = rand()% 80;
		arr[i] = randomSon;
		cout<<arr[i]<<"  ";
	}
	cout<<"\n\n";

	cout<<"massiv elementlariga prefiks (++(arr)) amali : \n\n";
	
	for (int i = 0; i < arr.size(); i++)
	{
		cout<< ++ arr[i] <<"  ";
	}
	cout<<"\n\n";
	
	cout<<"massiv elementlariga postfiks ((arr)++) amali ; \n\n";
	
	for (int i = 0; i < arr.size(); i++)
	{
		cout<< arr[i] ++ <<"  ";
	}
	cout<<endl;
	return 0;
}
