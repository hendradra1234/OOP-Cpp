#pragma once
#include <iostream>


using namespace std;
class Userinput
{
public:
    string device;
    string type;
    string prosesor;
    Userinput(string device, string type, string prosesor)
    {

       
    Userinput::device = device;
    Userinput::type = type;
    Userinput::prosesor = prosesor;
    }

    string Load(){

        return device + " " + Userinput::type + " " +prosesor + "\n";
        
    }
};
    class DBsave
    {
    public:
        ifstream in;
        ofstream Out;
        string filename;

        DBsave(const char *filename)
        {
            DBsave::filename = filename;
        }

        void savedata(Userinput data){
            DBsave::Out.open(DBsave::filename,ios::app);
        DBsave::Out<<data.Load();

        }

        void viewdata()
        {
            string Device,Type,Procesor;
            int index;


            while(!DBsave::in.eof())
            {
DBsave::in>>Device;
DBsave::in>>Type;
DBsave::in >>Procesor;
cout<<index++;

cout<<Device;
cout<<Type;
cout<<Procesor <<endl;
            }
DBsave::in.close();
        }
    };
