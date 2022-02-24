#include <iostream>
using namespace std;
class kub{
	public:
		void kub_help(){
		cout<<"Kub 6ta o'zaro teng bo'lgan kvadratlardan iborat ko'pyoqdir;\n";
		}
		void kub_hajm_sirt(int a){
		float v,s;
		v = a*a*a;
		s = 4*a*a;	
		cout<<"Hajmi V= "<<v<<endl;
		cout<<"Yon sirti s= "<<s;
	}
};
int main(){
	kub kub;
	int a;
	kub.kub_help();
	cout<<"a=";
	cin>>a;
	cout<<endl;
	kub.kub_hajm_sirt(a);
	
}
