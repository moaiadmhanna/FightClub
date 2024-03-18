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
std::string Player::ability1Getter() const {
    return this->ability1;
}
std::string Player::ability2Getter() const {
    return this->ability2;
}
void Player::getAbilitiesInfo() const{
    cout << " 1-";
    getAbilityInfo(this->ability1);
    cout << " 2-";
    getAbilityInfo(this->ability2);
}
Player* Player::clone() const{
    return new Player(*this);
}

