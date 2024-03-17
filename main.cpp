#include <iostream>
#include <Player.h>
#include <Charkter.h>
#include <drawer.h>
#include <CharkterFabrik.h>
#include <time.h>

using namespace std;

void abilitesPrinter(){
    for(int i = 0; i < NUMBER_OF_ABILITIES ; i++){
        cout << i+1 <<"- ";
        getAbilityInfo(abilitiesNames[i]);
        cout << endl;
    }
}

std::string abilityChoose(int x){
    cout << "Ability" << x << ":" << endl;
    int ability;
    abilitesPrinter();
    while(true){
        cout <<"(1-"<<NUMBER_OF_ABILITIES<<"): ";
        cin >> ability;
        if(ability > 0 && ability < NUMBER_OF_ABILITIES + 1){break;}
    }
    return abilitiesNames[ability-1];
}
Player* playerChoose(CharkterFabrik* playerFabrik,int x){
    system("cls");
    cout << "PLAYER"<<x<<":"<<endl;
    char input;
    while(true){
        cout << "Do you want to choose from the charckters or make your own (y/n): ";
        cin >> input;
        if(input == 'y' || input == 'n'){break;}
    }
    if(input == 'n'){
        std::string name;
        cout << "Give your tank a name: ";
        cin >> name;
        return new Player(name,abilityChoose(1),abilityChoose(2));
    }
    else{
        cout << "You have 5 different Tanks each with its own abilities" << endl;
        cout << endl;
        playerFabrik->getCharktersInfo();
        int tankChoose;
        while(true){
            cout << "(1-5): ";
            cin >> tankChoose;
            if(tankChoose > 0 && tankChoose < 6){break;}
        }
        return playerFabrik->getCharkter(tanksnameConvertor(tanksNames[tankChoose-1]));
    }
}
void playerAbilityUse(Player* player1, Player* player2, char direction){
    player1->getAbilitiesInfo();
    int input;
    while(true){
        cout << "Which Ability you want to use (1-2): ";
        cin >> input;
        if(input == 1 || input == 2){break;};
    }
    if(input == 1){
        tanksDrawerFiringAbility(direction,abilityConvertor(player1->ability1Getter()));
        player1->attackMove(player1->ability1Getter(),player2);
    }
    else{
        tanksDrawerFiringAbility(direction,abilityConvertor(player1->ability2Getter()));
        player1->attackMove(player1->ability2Getter(),player2);
    }
}
int main()
{
    srand(time(0));
    CharkterFabrik* playersFabrik = new CharkterFabrik();
    startScreen();
    Player* player1 = playerChoose(playersFabrik,1);
    Player* player2 = playerChoose(playersFabrik,2);
    tanksDrawer(player1,player2);
    while(true){
        if(player1->healthGetter() <= 0 || player2->healthGetter() <= 0){
            gameOverScreen();
            break;
        }
        tanksDrawer(player1,player2);
        cout << endl;
        cout << "PLAYER1 Turn:" <<endl;
        playerAbilityUse(player1,player2,'l');
        tanksDrawer(player1,player2);
        if(player1->healthGetter() <= 0 || player2->healthGetter() <= 0){
            gameOverScreen();
            break;
        }
        cout << endl;
        cout << "PLAYER2 Turn:" <<endl;
        playerAbilityUse(player2,player1,'r');
    }
}
