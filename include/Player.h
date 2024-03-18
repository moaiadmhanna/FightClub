#ifndef PLAYER_H
#define PLAYER_H
#include "Charkter.h"
#include <string>

class Player : public Charkter
{
    public:
        Player(std::string name, std::string ability1, std::string ability2);
        virtual ~Player();
        void getAbilitiesInfo() const override;
        Player* clone() const;
        std::string ability1Getter() const override;
        std::string ability2Getter() const override;


    protected:

    private:
        std::string ability1;
        std::string ability2;
};

#endif // PLAYER_H
