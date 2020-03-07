//#pragma once
#include <iostream>
#include <string>
using namespace std;
class vehicleset
{   //class
    //object
public:
    string typevehicle;
    string produsen;
    string Type;
    string Machine;
    string fueltype;
    double Energy;
    double height;
    double windth;
    double weight;

    //constructor
    vehicleset(string inputtypevehicle, string inputprodusen, string inputType, string inputMachine, string inputfueltype, float inputEnergy, float inputheight, float inputwindth, float inputweight)
    {

        vehicleset::typevehicle = inputtypevehicle;
        vehicleset::produsen = inputprodusen;
        vehicleset::Type = inputType;
        vehicleset::Machine = inputMachine;
        vehicleset::fueltype = inputfueltype;
        vehicleset::Energy = inputEnergy;
        vehicleset::height = inputheight;
        vehicleset::windth = inputwindth;
        vehicleset::weight = inputweight;


cout<<"+====================================================================================+"<<endl;
        cout <<"Tipe kendaraan : "<< vehicleset::typevehicle << endl;
        cout<<"Produsen : " << vehicleset::produsen << endl;
        cout <<"Tipe "<<vehicleset::typevehicle <<" : "<< vehicleset::Type << endl;
        cout<<"Mesin : "<< vehicleset::Machine << endl;
        cout<<"Tipe bahan bakaar :"  << vehicleset::fueltype << endl;
        cout<<"HP"<< vehicleset::Energy << endl;
        cout <<"tinggi :"<< vehicleset::height << endl;
        cout<<"Lebar : " << vehicleset::windth << endl;
        cout<<"Berat : " << vehicleset::weight << endl;
        cout<<""<<endl;

        cout << "+====================================================================================+"<<endl;
    }
};