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
        int healthGetter() const;
        int accuracyGetter() const;
        int shieldGetter() const;
        std::string nameGetter()const;
        void healthSetter(int health);
        void accuracySetter(int accuracy);
        void shieldSetter(int shield);
        void takesDamage(int damage,int accuracy);


    protected:
        std::string name;
        int health;
        int accuracy;
        int shield;

    private:
};

#endif // CHARKTER_H
