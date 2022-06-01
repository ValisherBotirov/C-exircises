#include <iostream>
#include<cmath>
using namespace std;
float f1(float x, float y, int v) {
 return (v+1)/2.*x*x+(v+2)/4.*y*y-(v+3)/5.*x*y-v;
}
float f2(float x, float y, int v) {
 return (v+2)/5.*x*x+(v+3)/3.*y*y+(v+5)/4.*x*y-v;
}
float f1x(float x, float y, int v) {
 return (v+1)*1.*x-(v+3)/5.*y;
}
float f2x(float x, float y, int v) {
 return (v+2)/5.*x*2+(v+5)/5.*y;
}
float f1y(float x, float y, int v) {
 return (v+2)/2.*y-(v+3)/5.*x;
}
float f2y(float x, float y, int v) {
 return (v+3)/3.*2*y+(v+5)/4.*x;
}
float det(float x, float y, int v) {
 return 1.*f1x(x,y,v)*f2y(x,y,v)-1.*f1y(x,y,v)*f2x(x,y,v);
}
float detx(float x, float y, int v) {
 return 1.*f1(x,y,v)*f2y(x,y,v)-1.*f2(x,y,v)*f1y(x,y,v);
}
float dety(float x, float y, int v) {
 return 1.*f1x(x,y,v)*f2(x,y,v)-1.*f1(x,y,v)*f2x(x,y,v);
}
int main() {
 int v,i=1;
 cout<<"Variantingizni nomerini kiriting : ";
 cin>>v;
 float e1,x0,y0,x,y,e=0.0001*v;
 //cout<<"\n Boshlang'ich qiymatlarni kiriting : ";
cout<<"Xo-ning boshlang'ich qiymatini kiriting:";cin>>x0; 
cout<<"Yo-ning boshlang'ich qiymatini kiriting:";cin>>y0; 
 x=x0-1.*detx(x0,y0,v)/det(x0,y0,v);
 y=y0-1.*dety(x0,y0,v)/det(x0,y0,v);
 e1=1.*sqrt(1.*(x-x0)*(x-x0)+1.*(y-y0)*(y-y0));
 cout<<"\n"<<i<<"\t"<<x<<"\t->\t"<<y<<"\t->\t"<<e1<<"\n";
 while (e1>e) {
   i++;
   x0=x;
   y0=y;
   x=x0-1.*detx(x0,y0,v)/det(x0,y0,v);
   y=y0-1.*dety(x0,y0,v)/det(x0,y0,v);
   e1=1.*sqrt(1.*(x-x0)*(x-x0)+1.*(y-y0)*(y-y0));
   cout<<"\n"<<i<<"\t"<<x<<"\t->\t"<<y<<"\t->\t"<<e1<<"\n";
 }
}