#include "Charkter.h"
#include <windows.h>

Charkter::Charkter(std::string name)
{
    this->name = name;
    this->health = 100;
    this->accuracy = 50;
    this->shield = 20;
    this->human = true;
    this->wins = 0;
    this->loses = 0;

}
Charkter::Charkter()
{
    std::string botName = "BOT" +  std::to_string(rand()%1000);
    this->name = botName;
    this->health = 100;
    this->accuracy = 50;
    this->shield = 20;
    this->human = false;
    this->wins = 0;
    this->loses = 0;
}

Charkter::~Charkter()
{
    //dtor
}
int Charkter::healthGetter() const{
    return this->health;
}
int Charkter::accuracyGetter() const{
    return this->accuracy;
}
int Charkter::shieldGetter() const{
    return this->shield;
}
std::string Charkter::nameGetter() const {
    return this->name;
}
void Charkter::healthSetter(int health){
    this->health = health;
}
void Charkter::accuracySetter(int accuracy){
    this->accuracy = accuracy;
}
void Charkter::shieldSetter(int shield){
    this->shield = shield;
}
void Charkter::takesDamage(int damage, int accuracy){
    int randomnumber = 1 + rand()%100;
    if(randomnumber > accuracy){
        return;
    }
    if(this->shield > 0)
    {
        if(damage > this->shield){
            damage -= shield;
            this->shield = 0;
            this->health -= damage;
        }
        else
        {
         this->shield -= damage;
        }
    }
    else
    {
        this->health -= damage;
    }
    std::cout << "The Tank took damage" << std::endl;
    Sleep(1500);
}

void Charkter::attributesRestarter(){
    this->health = 100;
    this->accuracy = 50;
    this->shield = 20;
}

