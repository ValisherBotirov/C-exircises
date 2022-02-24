#include<iostream>
using namespace std;
class car{
	public:
	string rusumi;
	int yili;
	int quvvati;
	string rangi;
	string nomi;
};

int main()
{
	car x;
	cout<<"Nomi: ";cin>>x.nomi;
	cout<<"Rusumi: ";cin>>x.rusumi;
	cout<<"Ishlab chiqilgan sanasi: ";cin>>x.yili;
	cout<<"Rangi: "; cin>>x.rangi<<endl;
	cout<<"Dvigatel quvvati: "; cin>>x.quvvati<<endl;
	cout<<"Barcha malumotlar: "<<endl;
	cout<<"Nomi: "<<x.nomi<<endl;
	cout<<"Rusumi: "<<x.rusumi<<endl;
	cout<<"Quvvati: "<<x.quvvati<<endl;
	cout<<"Yili: "<<x.yili<<endl;
}
