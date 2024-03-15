#include <iostream>
#include <string>
#include "Player.h"

Player::Player(std::string name, std::string ability1, std::string ability2, int ability1Damage ,int ability2Damage):Charkter(name)
{
    this->ability1 = ability1;
    this->ability2 = ability2;
    this->ability1Damage = ability1Damage;
    this->ability2Damage = ability2Damage;
}

Player::~Player()
{
    //dtor
}
std::string Player::toString() const
{
       std::string charkterString;
       charkterString += "Hello i am " + this->name + " i have two abilities firstOne: " + this->ability1 + " that deals a: " +
       std::to_string(this->ability1Damage) + " secondOne: " + this->ability2 + " that deals a: " + std::to_string(this->ability2Damage);
       return charkterString;
}
