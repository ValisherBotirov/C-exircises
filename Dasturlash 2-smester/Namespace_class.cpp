#include<iostream>
using namespace std;
namespace className{
	class Nsinf{
		int i; //private tipida
		public:
			int age ; //public tipida
			void set(int i){ //privatedan qiymatni oladi
				this -> i = i;
				//cout<<i;
			}
			int get(){
				return i;
			}
	};
}

int main(){
	className :: Nsinf obj;
	obj.set(7);
	cout<<obj.get();
	obj.age = 20;
	cout<<obj.age;
}
