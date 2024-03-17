#include <iostream>
#include <string>
#include "Player.h"
#include "defualts.h"
using namespace std;

Player::Player(std::string name, std::string ability1, std::string ability2):Charkter(name)
{
    this->ability1 = ability1;
    this->ability2 = ability2;
}

Player::~Player()
{
    //dtor
}
std::string Player::toString() const
{
       std::string charkterString;
       charkterString += "Hello i am " + this->name + " i have two abilities first one: " + this->ability1 + " second one: " + this->ability2;
       return charkterString;
}
std::string Player::ability1Getter() const{
    return this->ability1;
}
std::string Player::ability2Getter() const{
    return this->ability2;
}
void Player::getAbilitiesInfo() const{
    cout << " 1-";
    getAbilityInfo(this->ability1);
    cout << " 2-";
    getAbilityInfo(this->ability2);
}
void Player::attackMove(std::string ability ,Charkter* other){
    if (ability.compare("Shockwave") == 0)
    {
        if(other->accuracyGetter()> 20){
            other->accuracySetter(other->accuracyGetter() - 10);
        }
        other->takesDamage(30,this->accuracy);
    }
    else if (ability.compare("Energize")== 0)
    {
        this->shield += 10;
        if(this->accuracy + 20 < 100)
        {
         this->accuracy += 20;
        }
        else
        {
            this->accuracy = 100;
        }
    }
    else if (ability.compare("FrostNova") == 0)
    {
        other->takesDamage(40,this->accuracy);
        this->health += 10;
    }
    else if (ability.compare("FrostSurge") == 0)
    {
        this->shield += 20;
    }
    else if (ability.compare("TempestStrike") == 0)
    {
        int shieldOfOpponent = other->shieldGetter();
        other->shieldSetter(0);
        other->takesDamage(20,this->accuracy);
        other->shieldSetter(shieldOfOpponent);
    }
    else if (ability.compare("ShieldCharge") == 0)
    {
        this->shield+=30;
    }
    else if (ability.compare("TectonicSlam") == 0)
    {
        other->takesDamage(30,100);
    }
    else if (ability.compare("NatureRenewal") == 0)
    {
        this->health += 20;
        this->shield += 10;
    }
    else if (ability.compare("PlasmaBarrage") == 0)
    {
        other->takesDamage(40, this->accuracy);
        if(other->accuracyGetter() > 20){
            other->accuracySetter(other->accuracyGetter() - 10);
        }
    }
    else if (ability.compare("PlasmaShield") == 0)
    {
       this->shield += 100;
    };
}

Player* Player::clone() const{
    return new Player(*this);
}

