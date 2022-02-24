#include<iostream>
#include<cmath>
using namespace std ;
class doira{
	private:
		int r;
	public:
		int v;
		doira();
		~doira();
		float yuza();
		float uzunlik();
		void chiqar();
		void setR(int R){
			r=R;
		}
};
float doira::uzunlik(){
	return 2*M_PI*r;
}
void doira::chiqar(){
	cout<<"Doiraning yuzi: "<<yuza()<<endl;
	cout<<"Aylana uzunligi: "<<uzunlik()<<endl;
}
float doira::yuza(){
	return M_PI*r*r;
}
doira::doira(){
	cout<<"Obekt ishga tushdi\n";
}
doira::~doira(){
	cout<<"Obekt o'chirildi\n";
}

int  main(){
	doira a;
	a.setR(10);
	a.chiqar();
	cout<<"Ish tugadi: "<<endl;
	doira *b=new doira();
	b->v=20;
	cout<<b->v<<endl;
	delete b;
}
