#ifndef CHARKTER_H
#define CHARKTER_H
#include <string>
#include <iostream>

class Charkter
{
    public:
        Charkter();
        Charkter(std::string name);
        virtual ~Charkter();
        int healthGetter() const;
        int accuracyGetter() const;
        int shieldGetter() const;
        int winsGetter() const;
        int losesGetter() const;
        std::string nameGetter()const;
        virtual std::string ability1Getter() const = 0;
        virtual std::string ability2Getter() const = 0;
        virtual void getAbilitiesInfo() const = 0;
        void healthSetter(int health);
        void accuracySetter(int accuracy);
        void shieldSetter(int shield);
        void winsSetter(int win);
        void losesSetter(int loses);
        void takesDamage(int damage,int accuracy);
        void attributesRestarter();
        bool human;
        int wins;
        int loses;


    protected:
        std::string name;
        int health;
        int accuracy;
        int shield;

    private:
};

#endif // CHARKTER_H
