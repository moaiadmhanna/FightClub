#ifndef PLAYER_H
#define PLAYER_H
#include "Charkter.h"
#include <string>

class Player : public Charkter
{
    public:
        Player(std::string name, std::string ability1, std::string ability2);
        virtual ~Player();
        std::string toString() const override;
        void getAbilitiesInfo() const;
        void attackMove(std::string ability,Charkter* opponent);
        Player* clone() const;
        std::string ability1Getter() const;
        std::string ability2Getter() const;


    protected:

    private:
        std::string ability1;
        std::string ability2;
};

#endif // PLAYER_H
