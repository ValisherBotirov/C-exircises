#include<iostream>
using namespace std;
class piyola{
	public:
	string tur;
	int hajm;
	int narx;
};

class choynak{
	public:
		string tur;
		int hajm;
		int narx;
};

int main()
{
	piyola p;
	choynak c; 
	p.tur="Chinni";
	p.hajm=1;
	p.narx=2500;
	c.tur="Chinni";
	c.hajm=3;
	c.narx=5000;
	
	cout<<"Piyola\n";
	cout<<"Turi: "<<p.tur<<endl;
	cout<<"Hajmi: "<<p.hajm<<" litr"<<endl;
	cout<<"Narxi: "<<p.narx<<" so'm"<<endl;
	
	cout<<"Choynak\n";
	cout<<"Turi: "<<c.tur<<endl;
	cout<<"Hajmi: "<<c.hajm<<" litr"<<endl;
	cout<<"Narxi: "<<c.narx<<" so'm"<<endl;
	cout<<endl;
	
	if(p.tur == c.tur){
		cout<<"Bir hil turli";
	}
	else cout<<"Har xil turli";
	
	if(p.narx == c.narx){
   	  cout<<"Narxlari bir xil";
	   }
   	else cout<<"Narxlari har xil"; 
	
	if(p.hajm == c.hajm){
		cout<<"Hajmlari bir hajmli";
	}
	else cout<<"Hajmlari xar hajmli";
}
