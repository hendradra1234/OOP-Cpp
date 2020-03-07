#pragma once
#include <iostream>
#include <string>

class Tes{
    public:
    std::string tes;

    Tes(std::string tes){
        Tes::tes = tes;
        std::cout<<Tes::tes<<std::endl;
    }

    ~Tes(){
std::cout<<"stack dihapus"<<std::endl;
    }
};

class HeapMemory{
public:
    std::string HeapConfirm;
HeapMemory(const char* HeapConfirm){
    HeapMemory::HeapConfirm = HeapConfirm;
std::cout<<"heap : "<<HeapMemory::HeapConfirm<<std::endl;
}
//delete HeapMemory;
~HeapMemory(){
    std::cout<<"Heap dihapus"<<std::endl;
}

};