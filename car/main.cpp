// main.cpp
#include <iostream>
#include "header.hpp" // Sadece menüyü (Header) çağırıyoruz!

int main() {
    // 1. Nesneyi üret (Constructor çalışır, ekrana "açıldı" yazar)
    Calculator makine; 

    // 2. Fonksiyonları kullan
    int sonuc1 = makine.add(10, 5);
    int sonuc2 = makine.minus(20, 8);

    std::cout << "Toplama Sonucu: " << sonuc1 << std::endl;
    std::cout << "Cikarma Sonucu: " << sonuc2 << std::endl;

    return 0;
}