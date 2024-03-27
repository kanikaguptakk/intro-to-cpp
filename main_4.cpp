// C/C++ memory blocks
// Statically allocated memory will be on the STACK
// Dynamically allocated memory will be on the HEAP

#include <iostream>
using namespace std;
int main()
{
    // Statically Allocated memory
    int value=10;
    cout<<value<<endl;

    // Dynamically Allocated memory
    // A short intro to pointers
    int* d_value=&value;   // *-pointers (itself doesnt have memory allocation hence pointing to the address of statically allocated memory)
    cout<<*d_value<<endl;

    int *d_value=new int;
    *d_value=4;
    cout<<*d_value<<endl;
    int* vector =new int[99];
    // if no memory is left than it will show
    vector=nullptr;  // most likely it won't show (go for memory table to understand the same)
    vector[0];
    vector[1];
    vector[2];

    //..
    vector[99];
    
    return 0;
}