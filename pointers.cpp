#include <iostream>
#include <memory>

int main(){
    int x=3;
    int* xptr = nullptr;
    xptr = &x;
    std::cout << *xptr << std::endl;

    const int *a = &x; //cant change the value
    int const *b = &x; // cant change address
    const int const *c = &x; // cant change anything
    return 0;

    //Reference
    int z = 10;
    int& r = z;
    /*
    Reference adres tutmaz,
    Reference başka bir değişken değildir,
    Reference kopya değildir.
    Hafızada yeni bir int yok.
    r diye ayrı bir kutu yok.
    Tek kutu var, iki isim var.
    “Reference pointer gibi erişim sağlar”
    “Ama pointer gibi nesne değildir”
    */

#include <iostream>
#include <memory>

    // Ortak bir işaretçi oluşturma
    std::shared_ptr<int> p1 = std::make_shared<int>(100);{
        std::shared_ptr<int> p2 = p1; // Kopyaladık! Sayaç: 2 oldu.
        std::cout << "P2 icindeki deger: " << *p2 << std::endl;
        std::cout << "Kullanim sayisi: " << p1.use_count() << std::endl; // 2 basar
    } 
    // p2 burada ölür. Sayaç: 1'e düşer. Bellek SİLİNMEZ çünkü p1 hala ona bakıyor.

    std::cout << "Kullanim sayisi: " << p1.use_count() << std::endl; // 1 basar
    return 0;
 // p1 ölür. Sayaç: 0 olur. Bellek şimdi temizlenir.


auto lambda_fonskiyonu = []() { std::cout << "Merhaba"; };
// Fonksiyonu bir değişken gibi saklayabilir veya doğrudan bir yere parametre olarak verebilirsin.


}