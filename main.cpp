#include <iostream>

int returnSum(int num1, int num2){
    return num1 *  num2;
}

int main(){
    int tester {12};
    int first_num {tester + 10};
    int sum =  returnSum(tester, first_num);
    std::cout << first_num << tester<<"\n" <<sum;     
    return 0;
}