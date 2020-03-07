#include <iostream>
#include <string>
#include "class.h"//preproscecing directive class
using namespace std;
//console application

int main()
{
komputer ASUS;//ini merupakan deklarasi class
ASUS.brand = "ASUS";//OBJECT
ASUS.type = "A442ur";
ASUS.prosesor = "I5 ";
ASUS.GPU = "NVIDIA GT940";
ASUS.Procesorseries = "8450U";
ASUS.frekwensi_GPU = 1.1;
ASUS.frekwensi_Prosesor =3.4 ;
ASUS.frekwensi_ram = 2.4;

cout<<"SPESIFIKASI LAPTOP DAN KOMPUTER "<<endl;
cout<<"Brand laptop : "<<ASUS.brand<<""<<ASUS.type<<endl;
cout << " Tipe prosesor laptop : " << ASUS.prosesor << ASUS.Procesorseries  << endl;
cout << "Tipe GPU laptop :  " << ASUS.GPU<< endl;
cout << "frekwensi prosesor : " << ASUS.frekwensi_Prosesor << "GHZ" << endl;
cout<<"frekwensi RAM : "<<ASUS.frekwensi_ram<<"GHZ"<<endl;
cout<<"==========================================================="<<endl;
  
  komputer custom;
  cout<<""<<endl;
  cout<<"Memperbarui object class : "<<endl;
  cout<<"custom Spesification"<<endl;
  cout<<""<<endl;
  cout<<"1.brand : ";
  cin>>custom.brand;
cout<<""<<endl;
  cout<<"2.Type :";
  cin>>custom.type;
cout<<""<<endl;
  cout << "3.Prosesor :"; 
  cin >> custom.prosesor;
cout<<""<<endl;
  cout << "4.GPU :";
  cin >> custom.GPU;
cout<<""<<endl;
  cout << "5.Seri Prosesor:";
  cin >> custom.Procesorseries;
cout<<""<<endl;
cout<<"6.Frekwensi prosesor : ";
cin>>custom.frekwensi_Prosesor;
cout<<""<<endl;
cout << "6.Frekwensi Ram : ";
cin >> custom.frekwensi_ram;
cout<<""<<endl;
cout << "6.Frekwensi GPU : ";
cin >> custom.frekwensi_GPU;
 cout<<""<<endl;
 
 cout << "SPESIFIKASI LAPTOP DAN KOMPUTER Custom " << endl;
 cout << "Brand laptop : " << custom.brand << "" << custom.type << endl;
 cout << " Tipe prosesor laptop : " << ASUS.prosesor << custom.Procesorseries << endl;
 cout << "Tipe GPU laptop :  " << custom.GPU << endl;
 cout << "frekwensi prosesor : " << custom.frekwensi_Prosesor << "GHZ" << endl;
 cout << "frekwensi RAM : " << custom.frekwensi_ram << "GHZ" << endl;
 cout << "===========================================================" << endl;

 return 0;
}
