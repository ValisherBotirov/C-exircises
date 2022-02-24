#include<iostream>
using namespace std;
class sonlar{
	public:
		int butun;
		float xaqiqiy;
};
istream & operator >>(istream &Cin, sonlar &x)
{
	cout<<"Butun son " ; Cin>>x.butun;
	cout<<"Xaqiqiy son "; Cin>>x.xaqiqiy;
}
sonlar &operator +(sonlar x, sonlar y){
	sonlar z;
	z.butun=x.butun+y.butun;
	z.xaqiqiy=x.xaqiqiy+y.xaqiqiy;
	return z;
}
ostream & operator << (ostream & Cout, sonlar &x)
{
	Cout<<x.butun<<" "<<x.xaqiqiy<<endl;
}
int main()
{
	sonlar a,b,c;
	cout<<"a ";
	cin>>a;
	cout<<"b ";
	cin>>b;	
	c=a+b;
	cout<<c;

}
