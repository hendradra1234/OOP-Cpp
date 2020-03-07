#pragma once
#include <iostream>

class chooise{
  public:
int Chose;

chooise(){
  int YourChoise;
std::cout<<"=================================================="<<std::endl;
std::cout<<"1.Segitiga siku-siku"<<std::endl;
std::cout << "2.Segitiga sama kaki" << std::endl;
std::cout << "3.Persegi" << std::endl;
std::cout<<"4.belah  Ketupat "<<std::endl;
std::cout << "==================================================" << std::endl;
std::cout<<"Masukan pilihanmu : "
std::cin>>YourChoise;
std::endl;
//Pilihan(YourChoise);
}

void Pilihan(int inchoose){
  chooise::Chose = inchoose;

enum option{SM =1,SK,PS,BK};
  switch(chooise::Chose)
  {
    case SM:
      Draw Segitiga = Draw::Draw(6, 10, 2, '#');
      Segitiga.DrawObj();

      break;
    case SK:
    break;
    case PS:
    break;
    case BK:
    break;
  }

}
 };

class Draw{
    public:
 int X;
 int Y;
 int Val3;
char Character;

Draw(int Val1,int Val2,int Val3,char Character){
  Draw::X = Val1;
  Draw::Y = Val2;
  Draw::Val3 = Val3;
  Draw::Character = Character;

}

void DrawObj(){

  // std::cout << Draw::X <<std::endl;
  //   std::cout <<Draw::Y <<std::endl;
  //   std::cout <<Draw::Val3 <<std::endl;
  //  std::cout <<Draw::Character <<std::endl;

    for(int i = 1;i <= Draw::X;i++)
    {
      for(int J = 1;J<= i;J++){
        std::cout << Draw::Character;
        // if (J > Draw::Val3)
        // {
        //   break;
        // }
      }
        std::cout << std::endl;
      }


}
};


