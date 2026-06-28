#include <iostream>
#include <string>

int main(){
    // refrences

    int value {10};
    int& refvalue {value};

    std::cout << "Address of value: " << &value << std::endl;
    std::cout << "Address of refvalue: " << &refvalue << std::endl;
    std::cout << "Value of value: " << value << std::endl;
    std::cout << "Value of refvalue: " << refvalue << std::endl;

    refvalue = 25;

    std::cout << "==== Changed refvalue value ===="<< std::endl;

    std::cout << "Address of value: " << &value << std::endl;
    std::cout << "Address of refvalue: " << &refvalue << std::endl;
    std::cout << "Value of value: " << value << std::endl;
    std::cout << "Value of refvalue: " << refvalue << std::endl;
} 


// watch modern family while I eat      