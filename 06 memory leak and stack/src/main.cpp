#include <iostream>
#include "../lib/main.h"
int main(){

//memory stack
    Tes tes1 = Tes("testing");
//memory heap
Tes* Heap = new Tes("Heap");

HeapMemory* Heap1 = new HeapMemory("Memory 1");
    return 0;
    }