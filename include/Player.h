#ifndef PLAYER_H
#define PLAYER_H
#include "Charkter.h"
#include <string>

class Player : public Charkter
{
    public:
        Player(std::string name, std::string ability1, std::string ability2, int ability1Damage ,int ability2Damage);
        virtual ~Player();
        std::string toString() const override;

    protected:

    private:
        std::string ability1;
        std::string ability2;
        int ability1Damage;
        int ability2Damage;

};

#endif // PLAYER_H
