#include header.hpp
#include <iostream>

Calculator::Calculator(){
    std::cout << "Hesap makinesi acildi"<<std::endl;

}

int Calculator::add(int a ,int b){
    return a+b;
}

int Calculator::minus(int a , int b){
    return a-b;
}