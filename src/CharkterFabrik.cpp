#include "CharkterFabrik.h"

CharkterFabrik::CharkterFabrik()
{
    this->CharkterPrototype[ThunderclapTank] = new Player("ThunderclapTank","Shockwave","Energize");
    this->CharkterPrototype[FrostguardTank] = new Player("FrostguardTank","FrostNova","FrostSurge");
    this->CharkterPrototype[StormbreakerTank] = new Player("StormbreakerTank","TempestStrike","ShieldCharge");
    this->CharkterPrototype[EarthwardenTank] = new Player("EarthwardenTank","TectonicSlam","NatureRenewal");
    this->CharkterPrototype[PlasmaTank] = new Player("PlasmaTank","PlasmaBarrage","PlasmaShield");
}

CharkterFabrik::~CharkterFabrik()
{
    for(int i = 0; i < NUMBER_OF_CHARCKTERS; i++){
        delete this->CharkterPrototype[i];
    }
}
Player* CharkterFabrik::getCharkter(charkterType type) const{
    return CharkterPrototype[type]->clone();
}

void CharkterFabrik::getCharktersInfo() const{
    for(int i = 0; i < NUMBER_OF_CHARCKTERS ; i++){
        std::cout <<i+1<<"- "<< CharkterPrototype[i]->nameGetter() << std::endl;
        CharkterPrototype[i]->getAbilitiesInfo();
        std::cout << std::endl;
    }
}
