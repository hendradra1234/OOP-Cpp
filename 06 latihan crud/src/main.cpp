#include <iostream>
//#include <msiquery.h>
#include<string>
#include <fstream>
#include "class.h"
//using namespace std;
int main(int argc, char const *argv[])
{
  system("cls");
  DBsave file = DBsave("text.txt");
  
  file.viewdata();
  string Device,Type,Proscesor;
  cout<<"==================================================="<<endl;
  cout<<"Masukan data : "<<endl;
cout<<"Device : ";
cin>>Device;
cout<<"Type: ";
cin>>Type;
cout<<"type Prosesor : ";
cin >> Proscesor;
cout << "===================================================" << endl;
Userinput Laptop = Userinput(Device,Type,Proscesor);
 
file.savedata(Laptop);
return 0;
}
