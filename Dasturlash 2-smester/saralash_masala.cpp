#include<iostream>
#include<string.h>
using namespace std;

  class kompyuter{
    public:
      string nomi,turi,versiyasi,zararli_oqibatlar;
      int hajmi,foydali_darajas,aktuatllik_darajasi;
      
      void kiritish(kompyuter a[], int n){
        for ( int i=1; i<=n; i++){
          cout<<i<<"- ma'lumot\n";
          cout<<"Nomi "; cin>>a[i].nomi;
          cout<<"versiyasi "; cin>>a[i].versiyasi;
          cout<<"zararli_oqibatlar "; cin>>a[i].zararli_oqibatlar;
          cout<<"hajmi "; cin>>a[i].hajmi;
          cout<<"foydali_darajas"; cin>>a[i].foydali_darajas;
          cout<<"aktuatllik_darajasi "; cin>>a[i].aktuatllik_darajasi;
          
        }
      }
      
    void chiqarish(kompyuter a[], int n){
      string qidir;
      int qidir2;
      cout<<"Nimsi qidirmoqchisiz?\n1- Nomi\n2- versiyasi, \n3 - zararli_oqibatlar, \n4- hajmi, \n5- foydaki_darajas, \n6-aktuatllik_darajasi\n\nn=";
      int q;
      cin>>q;
      switch (q)
      {
    
      case 1:
        cout<<"Qidirish uchun nomni kiriting! "; cin>>qidir;
        for(int i=1; i<=n; i++){
          if(qidir==a[i].nomi){
            cout<<i<<"- ma'lumot\n";
            cout<<"Nomi "<<a[i].nomi<<endl;
              cout<<"versiyasi "<<a[i].versiyasi<<endl;
            cout<<"zarazli_oqibalatlar "<<a[i].zararli_oqibatlar<<endl;
            cout<<"hajmi "<<a[i].hajmi<<endl;
            cout<<"foydali_darajas"<<a[i].foydali_darajas<<endl;
            cout<<"aktuatllik_darajasi "<<a[i].aktuatllik_darajasi<<endl<<endl;
          }
        }
        break;

      case 2:
        cout<<"Qidirish uchun komyuter nomini kiriting! "; cin>>qidir;
        for(int i=1; i<=n; i++){
          if(qidir==a[i].nomi){
            cout<<i<<"- ma'lumot\n";
            cout<<"Nomi "<<a[i].nomi<<endl;
              cout<<"versiyasi "<<a[i].versiyasi<<endl;
            cout<<"zararli_oqibatlar "<<a[i].zararli_oqibatlar<<endl;
            cout<<"hajmi "<<a[i].hajmi<<endl;
            cout<<"foydali_darajas "<<a[i].foydali_darajas<<endl;
            cout<<"foydali_darajas"<<a[i].foydali_darajas<<endl<<endl;
          }
        }
        break;
      case 3:
        cout<<"Qidirish uchun komo_versiyasi kiriting! "; cin>>qidir2;
        for(int i=1; i<=n; i++){
          if(qidir2==a[i].versiyasi){
            cout<<i<<"- ma'lumot\n";
            cout<<"Nomi "<<a[i].nomi<<endl;
              cout<<"versiyasi"<<a[i].versiyasi<<endl;
            cout<<"zararli_oqibatlari"<<a[i].zararli_oqibatlar<<endl;
            cout<<"hajmi "<<a[i].hajmi<<endl;
            cout<<"foydali_darajas"<<a[i].foydali_darajas<<endl;
            cout<<"aktuatllik_darajasi "<<a[i].aktuatllik_darajasi<<endl<<endl;
          }
        }
        break;
      case 4:
        cout<<"Qidirish uchun komp_hajmi  kiriting! "; cin>>qidir2;
        for(int i=1; i<=n; i++){
          if(qidir2==a[i].tort_hajmi){
            cout<<i<<"- ma'lumot\n";
            cout<<"Nomi "<<a[i].nomi<<endl;
              cout<<"versiyasi "<<a[i].versiyasi<<endl;
            cout<<"zararli_oqibatlar "<<a[i].zararli_oqibatlar<<endl;
            cout<<"hajmi"<<a[i].hajmi<<endl;
            cout<<"foydali_darajas "<<a[i].foydali_darajas<<endl;
            cout<<"aktuatllik_darajasi "<<a[i].aktuatllik_darajasi<<endl<<endl;
          }
        }
        break;
      case 5:
        cout<<"Qidirish uchun zararli_oqibatlar kiriting! "; cin>>qidir2;
        for(int i=1; i<=n; i++){
          if(qidir2==a[i].zararli_oqibatlar){
            cout<<i<<"- ma'lumot\n";
            cout<<"Nomi "<<a[i].nomi<<endl;
              cout<<"versiyasi "<<a[i].versiyasi<<endl;
            cout<<"zararli_oqibatlar "<<a[i].zararli_oqibatlar<<endl;
            cout<<"hajmi "<<a[i].hajmi<<endl;
            cout<<"foydali_darajas "<<a[i].foydali_darajas<<endl;
            cout<<"aktuatllik_darajasi "<<a[i].aktuatllik_darajasi<<endl<<endl;

}
        }
        break;
      case 6:
        cout<<"Qidirish uchun aktuatllik_darajasi kiriting! "; cin>>qidir2;
        for(int i=1; i<=n; i++){
          if(qidir2==a[i].aktuatllik_darajasi){
            cout<<i<<"- ma'lumot\n";
            cout<<"Nomi "<<a[i].nomi<<endl;
              cout<<"versiyasi"<<a[i].versiyasi<<endl;
            cout<<"zararli_oqibatlar "<<a[i].zararli_oqibatlar<<endl;
            cout<<"hajmi"<<a[i].hajmi<<endl;
            cout<<"foydali_darajas "<<a[i].foydali_darajas<<endl;

cout<<"aktuatllik_darajasi"<<a[i].aktuatllik_darajasi<<endl<<endl;
          }
        }
        break;
      
      default:
        cout<<"Noto'gri buyruq kiritildi";
        break;
      }
    }  

    
          
    };
    

int main(){
  int n;
  string qidir;
  cout<<"Nechta ma'lumot kiritmoqchisiz? "<<endl;
  cin>>n;
  fanlar cup[20];
  cup[20].kiritish(cup,n);
  cup[20].chiqarish(cup,n);
  return 0;  
  
}
