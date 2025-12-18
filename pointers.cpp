#include <iostream>
#include <memory>

int main(){
    int x=3;
    int* xptr = nullptr;
    xptr = &x;
    std::cout << *xptr << std::endl;

    const int *a = &x; //cant change the value
    int const *b = &x; // cant change address
    const int const &x; // cant change anything
    return 0;

    //Reference
    int x = 10;
    int& r = x;
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
}