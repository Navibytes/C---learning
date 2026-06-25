#include <iostream>
#include <string>

int main(){
    std::cerr << "this is an error message \n";
    std::clog <<"this is a log message\n";
    int age;
    std::string name;

    std::cout << "Please enter name and age";
    std::getline(std::cin, name);
    std::cin >> age;

    std::cout << age << "\n name:" << name;

    return 0;
}