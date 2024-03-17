#ifndef CHARKTERFABRIK_H
#define CHARKTERFABRIK_H
#include "defualts.h"
#include "Charkter.h"
#include "Player.h"

class CharkterFabrik
{
    public:
        CharkterFabrik();
        virtual ~CharkterFabrik();
        Player* getCharkter(charkterType type) const;
        void getCharktersInfo() const;

    protected:

    private:
        Player* CharkterPrototype[NUMBER_OF_CHARCKTERS];
};

#endif // CHARKTERFABRIK_H
