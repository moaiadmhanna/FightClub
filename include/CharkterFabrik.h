#ifndef CHARKTERFABRIK_H
#define CHARKTERFABRIK_H
#include "Charkter.h"
#include "Player.h"
#include "defualts.h"
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
