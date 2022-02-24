#include<iostream>
using namespace std;
class butunson{
	private:
		int b;
		public:
			void yoz(int k);
			int ol();
			
};
void butunson::yoz(int k){
	b=k;
}
int butunson::ol(){
	return b;
}

int main(){
	butunson a;
	a.yoz(20);
	cout<<a.ol();
}
