#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <iostream>

class Player
{
    public:
        Player(std::string name);
        virtual ~Player();
        virtual std::string toString() const = 0;

    protected:
        std::string name;
        int health;

    private:
};

#endif // PLAYER_H
