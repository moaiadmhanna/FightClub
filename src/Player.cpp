#include "Player.h"

Player::Player(std::string name)
{
    this->name = name;
    this->health = 100;
}

Player::~Player()
{
    //dtor
}
