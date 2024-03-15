#ifndef CHARKTER_H
#define CHARKTER_H
#include <string>
#include <iostream>

class Charkter
{
    public:
        Charkter(std::string name);
        virtual ~Charkter();
        virtual std::string toString() const = 0;

    protected:
        std::string name;
        int health;

    private:
};

#endif // CHARKTER_H
