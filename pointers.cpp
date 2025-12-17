#include <iostream>

int main(){
    int x=3;
    int* xptr = nullptr;
    xptr = &x;
    std::cout << *xptr << std::endl;


    return 0;
}