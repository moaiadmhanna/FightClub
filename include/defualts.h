#define NUMBER_OF_CHARCKTERS 5
#define NUMBER_OF_ABILITIES 10
#include <string>
#include <iostream>
#pragma once

enum charkterType
{
    ThunderclapTank,
    //Shockwave Unleashes a powerful shockwave that deals 30 damage to enemies and reduces their accuracy by 10
    //Energize Provides a surge of energy, increasing the shield by 10 and boosting accuracy by 20.
    FrostguardTank,
    //FrostNova Releases a freezing blast that deals 40 damage to enemies and increases the tank's health by 10.
    //FrostSurge Channels a surge of frost energy, bolstering the shield by 20.
    StormbreakerTank,
    //TempestStrike  Executes a relentless strike that ignores opponent shields, dealing 20 damage directly to their health.
    //ShieldCharge Charges forward with an impenetrable shield, increasing the shield strength by 30.
    EarthwardenTank,
    //TectonicSlam  Strikes the ground with immense force, increasing accuracy to 100 to ensure a hit and dealing 30 damage.
    //NatureRenewal Channels the power of nature to rejuvenate, increasing health by 20 and strengthening the shield by 10.
    PlasmaTank,
    //PlasmaBarrage Unleashes a barrage of plasma blasts, dealing 40 damage to enemies and reducing their accuracy by 10.
    //PlasmaShield Erects a formidable plasma shield, significantly boosting the shield strength by 100.
};

const std::string tanksNames[] = {"ThunderTank","FrostguardTank","StormbreakerTank","EarthwardenTank","PlasmaTank"};
const std::string abilitiesNames[] = {"Shockwave","Energize","FrostNova","FrostSurge","TempestStrike","ShieldCharge","TectonicSlam","NatureRenewal","PlasmaBarrage","PlasmaShield"};

enum abilities
{
    Shockwave,
    Energize,
    FrostNova,
    FrostSurge,
    TempestStrike,
    ShieldCharge,
    TectonicSlam,
    NatureRenewal,
    PlasmaBarrage,
    PlasmaShield,
};

void getAbilityInfo(std::string ability);
charkterType tanksnameConvertor(std::string tankName);
abilities abilityConvertor(std::string ability);
