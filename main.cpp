#include <iostream>
#include <Player.h>
#include <Charkter.h>
#include "drawer.h"
#include "CharkterFabrik.h"
#include <time.h>

using namespace std;

charkterType tanksnameConvertor(std::string tankName){
    if(tankName == tanksNames[0]){
        return ThunderclapTank;
    }
    else if (tankName == tanksNames[1]){
        return FrostguardTank;
    }
    else if (tankName == tanksNames[2]){
        return StormbreakerTank;
    }
    else if (tankName == tanksNames[3]){
        return EarthwardenTank;
    }
    else{
        return PlasmaTank;
    }
}


int main()
{
    srand(time(0));
    CharkterFabrik* playersFabrik = new CharkterFabrik();
    std::cout << R"(

        ,----,
      ,/   .`|
    ,`   .'  :                            ,-.                              .---.
  ;    ;     /                        ,--/ /|                             /. ./|
.'___,/    ,'                 ,---, ,--. :/ |                         .--'.  ' ;             __  ,-.
|    :     |              ,-+-. /  |:  : ' /  .--.--.                /__./ \ : |           ,' ,'/ /|
;    |.';  ;  ,--.--.    ,--.'|'   ||  '  /  /  /    '           .--'.  '   \' .  ,--.--.  '  | |' |
`----'  |  | /       \  |   |  ,"' |'  |  : |  :  /`./          /___/ \ |    ' ' /       \ |  |   ,'
    '   :  ;.--.  .-. | |   | /  | ||  |   \|  :  ;_            ;   \  \;      :.--.  .-. |'  :  /
    |   |  ' \__\/: . . |   | |  | |'  : |. \\  \    `.          \   ;  `      | \__\/: . .|  | '
    '   :  | ," .--.; | |   | |  |/ |  | ' \ \`----.   \          .   \    .\  ; ," .--.; |;  : |
    ;   |.' /  /  ,.  | |   | |--'  '  : |--'/  /`--'  /           \   \   ' \ |/  /  ,.  ||  , ;
    '---'  ;  :   .'   \|   |/      ;  |,'  '--'.     /             :   '  |--";  :   .'   \---'
           |  ,     .-./'---'       '--'      `--'---'               \   \ ;   |  ,     .-./
            `--`---'                                                  '---"     `--`---'

    )" << endl;
    cout << "                                            Press Enter to PLay:";
    cin.ignore();
    system("cls");
    int player1Input;
    int player2Input;
    cout << "You have 5 different Tanks each with its own abilities" << endl;
    playersFabrik->getCharktersInfo();
    cout << "PLayer1:(1-5)";
    cin >> player1Input;
    cout << "PLayer2:(1-5)";
    cin >> player2Input;
    Player* player1 = playersFabrik->getCharkter(tanksnameConvertor(tanksNames[player1Input-1]));
    Player* player2 = playersFabrik->getCharkter(tanksnameConvertor(tanksNames[player2Input-1]));
    tanksDrawer(player1,player2);

}
