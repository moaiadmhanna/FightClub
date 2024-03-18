#ifndef BOT_H
#define BOT_H
#include <string>
#include <defualts.h>

class Bot : public Charkter
{
    public:
        Bot();
        virtual ~Bot();
        std::string ability1Getter() const override;
        std::string ability2Getter() const override;
        void getAbilitiesInfo() const override;
        int abilityChoose() const;
        int opponentChoose(int range) const;

    protected:

    private:
        std::string ability1;
        std::string ability2;

};

#endif // BOT_H
