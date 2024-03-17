#include <iostream>
#include "drawer.h"
#include <windows.h>

using namespace std;
void tanksDrawer(Player* player1, Player* player2){
    system("cls");
    cout << "    .--._____,                                              `_____.--.     " << endl;
    cout << "  .-='=='==-, \"                                           \" `-=='=='==.  " << endl;
    cout << " (O_o_o_o_o_O)                                               (O_o_o_o_o_O) " << endl;
    cout << endl;
    cout << player1->nameGetter();
    cout.width(60);
    cout << player2->nameGetter() << "   ";
    cout << endl;
    cout << endl;
    cout << "HP:";
    cout << player1->healthGetter();
    cout.width(55);
    cout << "HP:" ;
    cout << player2->healthGetter();
    cout << "   ";
    cout << endl;
    cout << "Shield:" << player1->shieldGetter();
    cout.width(56);
    cout << "Shield:" << player2->shieldGetter() << "   ";
    cout << endl;
    cout << "Accuracy:" << player1->accuracyGetter();
    cout.width(56);
    cout << "Accuracy:" << player2->accuracyGetter() << "   ";
    cout << endl;
    cout << "Ability1: " << player1->ability1Getter();
    cout << " Ability2: " << player1->ability2Getter();
    cout.width(20);
    cout << "Ability1: " << player2->ability1Getter();
    cout << " Ability2: " << player2->ability2Getter();
    cout << endl;
}

void tanksDrawerFiringAbility(char direction,abilities type){
    if(type%2 == 0){
        system("cls");
        if(direction == 'l'){
             cout << "    .--._____,                                             `_____.--.     " << endl;
             cout << "  .-='=='==-, \"   0                                      \" `-=='=='==.  " << endl;
             cout << " (O_o_o_o_o_O)                                              (O_o_o_o_o_O) " << endl;
             Sleep(200);
             system("cls");
             cout << "    .--._____,                                             `_____.--.     " << endl;
             cout << "  .-='=='==-, \"        0                                 \" `-=='=='==.  " << endl;
             cout << " (O_o_o_o_o_O)                                              (O_o_o_o_o_O) " << endl;
             Sleep(200);
             system("cls");
             cout << "    .--._____,                                             `_____.--.     " << endl;
             cout << "  .-='=='==-, \"                0                         \" `-=='=='==.  " << endl;
             cout << " (O_o_o_o_o_O)                                              (O_o_o_o_o_O) " << endl;
             Sleep(200);
             system("cls");
             cout << "    .--._____,                                             `_____.--.     " << endl;
             cout << "  .-='=='==-, \"                          0               \" `-=='=='==.  " << endl;
             cout << " (O_o_o_o_o_O)                                              (O_o_o_o_o_O) " << endl;
             Sleep(200);
             system("cls");
             cout << "    .--._____,                                             `_____.--.     " << endl;
             cout << "  .-='=='==-, \"                                  0       \" `-=='=='==.  " << endl;
             cout << " (O_o_o_o_o_O)                                              (O_o_o_o_o_O) " << endl;
             Sleep(200);
             system("cls");
             cout << "    .--._____,                                             `_____.--.     " << endl;
             cout << "  .-='=='==-, \"                                      0   \" `-=='=='==.  " << endl;
             cout << " (O_o_o_o_o_O)                                              (O_o_o_o_o_O) " << endl;
             Sleep(200);
             system("cls");
        }
        else{
            cout << "    .--._____,                                             `_____.--.     " << endl;
             cout << "  .-='=='==-, \"                                  0       \" `-=='=='==.  " << endl;
             cout << " (O_o_o_o_o_O)                                              (O_o_o_o_o_O) " << endl;
             Sleep(200);
             system("cls");
             cout << "    .--._____,                                             `_____.--.     " << endl;
             cout << "  .-='=='==-, \"                          0               \" `-=='=='==.  " << endl;
             cout << " (O_o_o_o_o_O)                                              (O_o_o_o_o_O) " << endl;
             Sleep(200);
             system("cls");
             cout << "    .--._____,                                             `_____.--.     " << endl;
             cout << "  .-='=='==-, \"                0                         \" `-=='=='==.  " << endl;
             cout << " (O_o_o_o_o_O)                                              (O_o_o_o_o_O) " << endl;
             Sleep(200);
             system("cls");
             cout << "    .--._____,                                             `_____.--.     " << endl;
             cout << "  .-='=='==-, \"        0                                 \" `-=='=='==.  " << endl;
             cout << " (O_o_o_o_o_O)                                              (O_o_o_o_o_O) " << endl;
             Sleep(200);
             system("cls");
             cout << "    .--._____,                                             `_____.--.     " << endl;
             cout << "  .-='=='==-, \" 0                                        \" `-=='=='==.  " << endl;
             cout << " (O_o_o_o_o_O)                                              (O_o_o_o_o_O) " << endl;
             Sleep(200);
             system("cls");
            }
         cout << "    .--._____,                                             `_____.--.     " << endl;
         cout << "  .-='=='==-, \"                                           \" `-=='=='==.  " << endl;
         cout << " (O_o_o_o_o_O)                                               (O_o_o_o_o_O) " << endl;
         cout << endl;
         Sleep(200);
         system("cls");
    }
}
void startScreen(){
    system("cls");
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
}

void gameOverScreen(){
    system("cls");
    std::cout << R"(


                                                            ,----..
  ,----..                         ____                     /   /   \
 /   /   \                      ,'  , `.                  /   .     :
|   :     :                  ,-+-,.' _ |                 .   /   ;.  \                     __  ,-.
.   |  ;. /               ,-+-. ;   , ||                .   ;   /  ` ;     .---.         ,' ,'/ /|
.   ; /--`    ,--.--.    ,--.'|'   |  || ,---.          ;   |  ; \ ; |   /.  ./|  ,---.  '  | |' |
;   | ;  __  /       \  |   |  ,', |  |,/     \         |   :  | ; | ' .-' . ' | /     \ |  |   ,'
|   : |.' .'.--.  .-. | |   | /  | |--'/    /  |        .   |  ' ' ' :/___/ \: |/    /  |'  :  /
.   | '_.' : \__\/: . . |   : |  | ,  .    ' / |        '   ;  \; /  |.   \  ' .    ' / ||  | '
'   ; : \  | ," .--.; | |   : |  |/   '   ;   /|         \   \  ',  /  \   \   '   ;   /|;  : |
'   | '/  .'/  /  ,.  | |   | |`-'    '   |  / |          ;   :    /    \   \  '   |  / ||  , ;
|   :    / ;  :   .'   \|   ;/        |   :    |           \   \ .'      \   \ |   :    | ---'
 \   \ .'  |  ,     .-./'---'          \   \  /             `---`         '---" \   \  /
  `---`     `--`---'                    `----'                                   `----'


    )" << endl;
}

