#include <iostream>
#include <string>

int main(){
    int num {20};
    switch(num){
        case 15:{
            std::cout << "15";
        }
        break;
        case 10:{
            std::cout << "10";
        }
        case 5: {
            std::cout << "5";
        }
        default:{
            std::cout << "none";
        }

    }
}