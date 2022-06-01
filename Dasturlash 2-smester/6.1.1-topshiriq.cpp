#include<iostream>
#include<complex>
using namespace std;
int main(){
	complex<double> kompleks (3.0, 4.0);
	cout << "Ozod hadi: " << real(kompleks) << endl;
  	cout << "Mavhum hadi: " << imag(kompleks) << endl;
  	cout<<"\n\n";
  	int k = real(kompleks);
  	int n = imag(kompleks);
  	cout<<"Prefks qiymati (++i) : " << ++k<<endl;
  	cout<<"Prefks qiymati (++i) : " << ++n<<endl;
  	
}