#ifndef CHARCKTER_H
#define CHARCKTER_H
#include "Player.h"
#include <string>

class charckter : public Player
{
    public:
        charckter(std::string name, std::string ability1, std::string ability2, int ability1Damage ,int ability2Damage);
        virtual ~charckter();
        std::string toString() const override;

    protected:

    private:
        std::string ability1;
        std::string ability2;
        int ability1Damage;
        int ability2Damage;

};

#endif // CHARCKTER_H
