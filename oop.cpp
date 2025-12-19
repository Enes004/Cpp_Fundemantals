#include <iostream>
#include <string>

class BattleBot {
    protected:
    std::string name;
    int hp;

    public:

    BattleBot(std::string n , int h){
        name =n;
        hp = h;
        std::cout << name << "fabrikadan cikti" <<std::endl;
    }

    virtual ~BattleBot(){
        std::cout << name << "Hurdaya cikti"<<std::endl;
    }
    
    virtual void attack(){
        std::cout << name << "Saldiriyor, Hp si : " << hp << std::endl;

    }

    int getHp(){
        return hp;
    }

    void setHp(int health){
        if(health<0) hp = 0;
        else if (health>100) hp = 100;
        else hp=health;
    }

    void takeDamage(int damage){
        hp = hp - damage;
        std::cout << damage << " kadar hasar aldi"<<std::endl;

    }


};

class TankBot : public BattleBot{

    private:
    int armor;

    public:

    //Constructor
    TankBot(std::string n , int h , int a) : BattleBot(n,h){
        armor = a;
        std::cout << "Tankbot "<<armor<< "u kusandi" << std::endl;
    }


    void defense(){
        std::cout <<name<< " tarafindan zirh giyildi defans guclu "<<std::endl;
    }

    //override
    void attack(){
        std::cout <<name<< " top atişi yapiyorr"<<std::endl;
    }

    ~TankBot(){
        std::cout <<name<< "hurdaya cikti" <<std::endl;
    }





};




int main() {
    TankBot tank1("Panzer", 200, 50);

    // POLYMORPHISM TESTİ
    // Tankı, genel bir Robot pointer'ı ile tutuyoruz.
    BattleBot* genelRobot = &tank1;

    std::cout << "\n--- POINTER UZERINDEN SALDIRI ---" << std::endl;
    
    // Eğer 'virtual' yazdıysan "Top Atisi" yazar.
    // Yazmadıysan "Standart Saldiri" yazar.
    genelRobot->attack(); 

    return 0;
}