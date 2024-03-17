#include <iostream>
#include <string>
#include "Player.h"
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
    if (this->ability1 == "Shockwave") {
        cout << "Shockwave Unleashes a powerful shockwave that deals 30 damage to enemies and reduces their accuracy by 10." << endl;
    } else if (this->ability1 == "Energize") {
        cout << "Energize Provides a surge of energy, increasing the shield by 10 and boosting accuracy by 20." << endl;
    } else if (this->ability1 == "FrostNova") {
        cout << "FrostNova Releases a freezing blast that deals 40 damage to enemies and increases the tank's health by 10." << endl;
    } else if (this->ability1 == "FrostSurge") {
        cout << "FrostSurge Channels a surge of frost energy, bolstering the shield by 20." << endl;
    } else if (this->ability1 == "TempestStrike") {
        cout << "TempestStrike  Executes a relentless strike that ignores opponent shields, dealing 20 damage directly to their health." << endl;
    } else if (this->ability1 == "ShieldCharge") {
        cout << "ShieldCharge Charges forward with an impenetrable shield, increasing the shield strength by 30." << endl;
    } else if (this->ability1 == "TectonicSlam") {
        cout << "TectonicSlam  Strikes the ground with immense force, increasing accuracy to 100 to ensure a hit and dealing 30 damage." << endl;
    } else if (this->ability1 == "NatureRenewal") {
        cout << "NatureRenewal Channels the power of nature to rejuvenate, increasing health by 20 and strengthening the shield by 10." << endl;
    } else if (this->ability1 == "PlasmaBarrage") {
        cout << "PlasmaBarrage Unleashes a barrage of plasma blasts, dealing 40 damage to enemies and reducing their accuracy by 10." << endl;
    } else if (this->ability1 == "PlasmaShield") {
        cout << "PlasmaShield Erects a formidable plasma shield, significantly boosting the shield strength by 100." << endl;
    };
    if (this->ability2 == "Shockwave") {
        cout << "Shockwave Unleashes a powerful shockwave that deals 30 damage to enemies and reduces their accuracy by 10." << endl;
    } else if (this->ability2 == "Energize") {
        cout << "Energize Provides a surge of energy, increasing the shield by 10 and boosting accuracy by 20." << endl;
    } else if (this->ability2 == "FrostNova") {
        cout << "FrostNova Releases a freezing blast that deals 40 damage to enemies and increases the tank's health by 10." << endl;
    } else if (this->ability2 == "FrostSurge") {
        cout << "FrostSurge Channels a surge of frost energy, bolstering the shield by 20." << endl;
    } else if (this->ability2 == "TempestStrike") {
        cout << "TempestStrike  Executes a relentless strike that ignores opponent shields, dealing 20 damage directly to their health." << endl;
    } else if (this->ability2 == "ShieldCharge") {
        cout << "ShieldCharge Charges forward with an impenetrable shield, increasing the shield strength by 30." << endl;
    } else if (this->ability2 == "TectonicSlam") {
        cout << "TectonicSlam  Strikes the ground with immense force, increasing accuracy to 100 to ensure a hit and dealing 30 damage." << endl;
    } else if (this->ability2 == "NatureRenewal") {
        cout << "NatureRenewal Channels the power of nature to rejuvenate, increasing health by 20 and strengthening the shield by 10." << endl;
    } else if (this->ability2 == "PlasmaBarrage") {
        cout << "PlasmaBarrage Unleashes a barrage of plasma blasts, dealing 40 damage to enemies and reducing their accuracy by 10." << endl;
    } else if (this->ability2 == "PlasmaShield") {
        cout << "PlasmaShield Erects a formidable plasma shield, significantly boosting the shield strength by 100." << endl;
    };
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
        cout << "here" << endl;
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

