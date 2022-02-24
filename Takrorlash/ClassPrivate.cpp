#include<iostream>
using namespace std;

class son{
	public:
		int a;
	    void byoz(int x){
       b=x;
      }
    	int ol(){
		return b;
	}
	private:
		int b;
};
int main()
{
	son a1;
	a1.a=10;
	cout<<a1.a<<endl;
	a1.byoz(20);
	cout<<a1.ol();
	
}
