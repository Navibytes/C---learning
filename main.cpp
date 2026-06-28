#include <iostream>
#include <string>

int main(){
    /*
    //nums
    int num1 {5};
    int* num2 = &num1;
    //int* firstp {&num2};
    std::cout << *num2<< "\n";

    //chars
    const char* message = {"Bello"} ;
    std::cout << message << "\n";
    std::cout <<*message;
    
    //pointers
    int *pointer;
    int num3 {12};
    pointer = &num3;
    std::cout << "Pointer address: "<< pointer<< std::endl;
    std::cout << "num3 address: "<< &num3<< std::endl;
    std::cout << "Pointer value: " << *pointer << std::endl;
    *pointer = 20;
    std::cout << "Pointer address: "<< pointer<< std::endl;
    std::cout << "num3 address: "<< &num3<< std::endl;
    std::cout << "Pointer value: " << *pointer<< std::endl;
    std::cout << "num3 value: " << num3;
    */
   /*
    //heap allocation
    int *pointer2 = new int {69};
    *pointer2 = 67;
    std::cout << "Pointer2 address: "<< pointer2 << std::endl;
    std::cout << "Pointer2 value: "<< *pointer2 << std::endl;

    delete pointer2;
    pointer2 = nullptr;
    
    // multiple pointers
    int num4 ={10};
    int* pointer3 {&num4};
    int* pointer4 {pointer3};

    std::cout << "Pointer3 address: "<< pointer3<< std::endl;
    std::cout << "Pointer4 address: "<< pointer4<< std::endl;
    std::cout << "Pointer4 value: "<< *pointer4<< std::endl;
    
    // avoding crashes 
    int* nullpointer {};
    if (nullpointer){
        std::cout << "address is NOT nullptr  " << *nullpointer;
    }else{
        std::cout << "address is nullptr  " <<nullpointer <<std::endl; // calling *nullpointer crashes program

    }
    delete nullpointer; // doesnt cause anyproblem when nullptr

    // memory leak

    
    int* pointer5 {new int {4}};
    std::cout << "Pointer5 value: " << *pointer5<< std::endl;
    pointer5 = new int {8}; //BAD - didnt release old address
    std::cout << "Pointer5 value: "<< *pointer5<< std::endl;

    delete pointer5; //releases int 8 but NOT int 4
    pointer5 = nullptr; 
    

    //the variable in this scope doesnt exist outside of this, making this a memory leak
    //this is unlike python which you can use the variable in a for-loop/smaller scope
    {
        int* smallscopepointer = {new int {120}}; 
        delete smallscopepointer; // make sure to release memory
        smallscopepointer = nullptr;
    }
    */
    // arrrays & pointers
    int* array {new int[5] {1,2,3}};

    for (size_t i{}; i < 5; ++i){
        std::cout << "Array position "<< i << " is value: " << array[i] << std::endl;
    }

    delete [] array;
    array = nullptr;

    std::cout << "==================" << std::endl;

    int* heapArray {new int[5]{5,4,3,2}};
    // throws error bad -->> std::cout << "Testing std::size "<< std::size(heapArray);

    delete [] heapArray;
    heapArray = nullptr;
    
    std::cout << "Program ended succesfully";


}   
