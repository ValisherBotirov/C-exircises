#include<iostream>
using namespace std;
class talaba{
	public:
		talaba();
		~talaba(){
			cout<<"Obekt o'chirildi";
		};
		int yoshi;
		string fam;
		string ism;
		float baxo;
		void print(){
			cout<<yoshi<<endl<<fam<<endl<<ism<<endl<<baxo;
		}
};
talaba::talaba(){
	cout<<"Talabaning yoshini kiriting ";
	cin>>yoshi;
	cout<<"Familiyasini kiriting ";
	cin>>fam;
	cout<<"Ismini kiriting ";
	cin>>ism;
	cout<<"Baxosini kiriting ";
	cin>>baxo;
	
}
int main()
{
	talaba a;
	a.print();
}
