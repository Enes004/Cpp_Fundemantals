#include <iostream>
#include <string>
#include <memory>

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
    std::shared_ptr<BattleBot> Bot1 = std::make_shared<TankBot>("AkilliTank",200,50);
    Bot1->attack();

   std::cout << "\n--- KOPYALAMA TESTI ---" << std::endl;
    
{
    std::shared_ptr<BattleBot> Bot2 = Bot1;
    Bot2->attack();
}

    return 0;
}