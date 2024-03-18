#include "Bot.h"

Bot::Bot()
{
    int randomNumber1 = rand()%NUMBER_OF_ABILITIES;
    int randomNumber2 = rand()%NUMBER_OF_ABILITIES;
    this->ability1 = abilitiesNames[randomNumber1];
    this->ability2 = abilitiesNames[randomNumber2];
}

Bot::~Bot()
{
    //dtor
}
std::string Bot::ability1Getter() const {
    return this->ability1;
}
std::string Bot::ability2Getter() const {
    return this->ability2;
}
void Bot::getAbilitiesInfo() const{
    std::cout << " 1-";
    getAbilityInfo(this->ability1);
    std::cout << " 2-";
    getAbilityInfo(this->ability2);
}
int Bot::abilityChoose() const{
    int randomNumber = 1 + rand()%2;
    return randomNumber;
}
int Bot::opponentChoose(int range) const {
    int randomNumber = 1 + rand()% (range/2);
    return randomNumber;
}
