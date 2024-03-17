#include "defualts.h"

void getAbilityInfo(std::string ability){
    if (ability == "Shockwave") {
        std::cout << "Shockwave Unleashes a powerful shockwave that deals 30 damage to enemies and reduces their accuracy by 10." << std::endl;
    } else if (ability == "Energize") {
        std::cout << "Energize Provides a surge of energy, increasing the shield by 10 and boosting accuracy by 20." << std::endl;
    } else if (ability == "FrostNova") {
        std::cout << "FrostNova Releases a freezing blast that deals 40 damage to enemies and increases the tank's health by 10." << std::endl;
    } else if (ability == "FrostSurge") {
        std::cout << "FrostSurge Channels a surge of frost energy, bolstering the shield by 20." << std::endl;
    } else if (ability == "TempestStrike") {
        std::cout << "TempestStrike  Executes a relentless strike that ignores opponent shields, dealing 20 damage directly to their health." << std::endl;
    } else if (ability == "ShieldCharge") {
        std::cout << "ShieldCharge Charges forward with an impenetrable shield, increasing the shield strength by 30." << std::endl;
    } else if (ability == "TectonicSlam") {
        std::cout << "TectonicSlam  Strikes the ground with immense force, increasing accuracy to 100 to ensure a hit and dealing 30 damage." << std::endl;
    } else if (ability == "NatureRenewal") {
        std::cout << "NatureRenewal Channels the power of nature to rejuvenate, increasing health by 20 and strengthening the shield by 10." << std::endl;
    } else if (ability == "PlasmaBarrage") {
        std::cout << "PlasmaBarrage Unleashes a barrage of plasma blasts, dealing 40 damage to enemies and reducing their accuracy by 10." << std::endl;
    } else if (ability == "PlasmaShield") {
        std::cout << "PlasmaShield Erects a formidable plasma shield, significantly boosting the shield strength by 100." << std::endl;
    };
};

charkterType tanksnameConvertor(std::string tankName){
    if(tankName == tanksNames[0]){
        return ThunderclapTank;
    }
    else if (tankName == tanksNames[1]){
        return FrostguardTank;
    }
    else if (tankName == tanksNames[2]){
        return StormbreakerTank;
    }
    else if (tankName == tanksNames[3]){
        return EarthwardenTank;
    }
    else{
        return PlasmaTank;
    }
};

abilities abilityConvertor(std::string ability){
    if(ability == abilitiesNames[0]){
        return Shockwave;
    }
    else if(ability == abilitiesNames[1]){
        return Energize;
    }
    else if(ability == abilitiesNames[2]){
        return FrostNova;
    }
    else if(ability == abilitiesNames[3]){
        return FrostSurge;
    }
    else if(ability == abilitiesNames[4]){
        return TempestStrike;
    }
    else if(ability == abilitiesNames[5]){
        return ShieldCharge;
    }
    else if(ability == abilitiesNames[6]){
        return TectonicSlam;
    }
    else if(ability == abilitiesNames[7]){
        return NatureRenewal;
    }
    else if(ability == abilitiesNames[8]){
        return PlasmaBarrage;
    }
    else if(ability == abilitiesNames[9]){
        return PlasmaShield;
    }
}
