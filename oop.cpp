#include <iostream>
#include <string>

class BattleBot {
    private:
    std::string name;
    int hp;

    public:

    BattleBot(std::string n , int h){
        name =n;
        hp = h;
        std::cout << name << "fabrikadan cikti" <<std::endl;
    }

    ~BattleBot(){
        std::cout << name << "Hurdaya cikti"<<std::endl;
    }
    
    void attack(){
        std::cout << name << "Saldiriyor, Hp si : " << hp << std::endl;

    }

    int getHp(){
        return hp;
    }

    void takeDamage(int damage){
        hp = hp - damage;
        std::cout << damage << " kadar hasar aldi"<<std::endl;

    }


};


int main(){
    BattleBot bot1("Matrix",100);
    bot1.attack();
    std::cout << "Mecvut can : "<<bot1.getHp()<<std::endl;

    return 0;
}