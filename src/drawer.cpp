#include <iostream>
#include "drawer.h"
#include <windows.h>

using namespace std;
void tanksDrawer(Charkter* charkters[], int NumberOFPlayers){
    system("cls");
    int counter = 0;
    for(int i = 0; i < NumberOFPlayers/2 ; i++){
        cout << "    .--._____,                                              `_____.--.     " << endl;
        cout << "  .-='=='==-, \"                                           \" `-=='=='==.  " << endl;
        cout << " (O_o_o_o_o_O)                                               (O_o_o_o_o_O) " << endl;
        cout << endl;
        cout << charkters[i+counter]->nameGetter();
        cout.width(60);
        cout << charkters[i+1+counter]->nameGetter() << "   ";
        cout << endl;
        cout << endl;
        cout << "HP:";
        cout << charkters[i+counter]->healthGetter();
        cout.width(55);
        cout << "HP:" ;
        cout << charkters[i+1+counter]->healthGetter();
        cout << "   ";
        cout << endl;
        cout << "Shield:" << charkters[i+counter]->shieldGetter();
        cout.width(56);
        cout << "Shield:" << charkters[i+1+counter]->shieldGetter() << "   ";
        cout << endl;
        cout << "Accuracy:" << charkters[i+counter]->accuracyGetter();
        cout.width(56);
        cout << "Accuracy:" << charkters[i+1+counter]->accuracyGetter() << "   ";
        cout << endl;
        cout << "Ability1: " << charkters[i+counter]->ability1Getter();
        cout << " Ability2: " << charkters[i+counter]->ability2Getter();
        cout.width(20);
        cout << "Ability1: " << charkters[i+1+counter]->ability1Getter();
        cout << " Ability2: " << charkters[i+1+counter]->ability2Getter();
        cout << endl;
        cout << "Wins:" << charkters[i+counter]->wins;
        cout.width(56);
        cout << "Wins:" << charkters[i+1+counter]->wins << "   ";
        cout << endl;
        cout << "Loses:" << charkters[i+counter]->loses;
        cout.width(56);
        cout << "Loses:" << charkters[i+1+counter]->loses << "   ";
        cout << endl;
        counter++;
    }
}

void tanksDrawerFiringAbility(abilities type, Charkter* charkter1,Charkter* charkter2){
    if(type%2 == 0){
        cout << "   " << charkter1->nameGetter();
        cout << "                                    " << charkter2->nameGetter() << endl;
        cout << endl;
         cout << "    .--._____,                                             `_____.--.     " << endl;
         cout << "  .-='=='==-, \"   0                                      \" `-=='=='==.  " << endl;
         cout << " (O_o_o_o_o_O)                                              (O_o_o_o_o_O) " << endl;
         Sleep(500);
         system("cls");
         cout << "   " << charkter1->nameGetter();
         cout << "                                    " << charkter2->nameGetter() << endl;
         cout << endl;
         cout << "    .--._____,                                             `_____.--.     " << endl;
         cout << "  .-='=='==-, \"        0                                 \" `-=='=='==.  " << endl;
         cout << " (O_o_o_o_o_O)                                              (O_o_o_o_o_O) " << endl;
         Sleep(500);
         system("cls");
         cout << "   " << charkter1->nameGetter();
         cout << "                                    " << charkter2->nameGetter() << endl;
         cout << endl;
         cout << "    .--._____,                                             `_____.--.     " << endl;
         cout << "  .-='=='==-, \"                0                         \" `-=='=='==.  " << endl;
         cout << " (O_o_o_o_o_O)                                              (O_o_o_o_o_O) " << endl;
         Sleep(500);
         system("cls");
         cout << "   " << charkter1->nameGetter();
         cout << "                                    " << charkter2->nameGetter() << endl;
         cout << endl;
         cout << "    .--._____,                                             `_____.--.     " << endl;
         cout << "  .-='=='==-, \"                          0               \" `-=='=='==.  " << endl;
         cout << " (O_o_o_o_o_O)                                              (O_o_o_o_o_O) " << endl;
         Sleep(500);
         system("cls");
         cout << "   " << charkter1->nameGetter();
         cout << "                                    " << charkter2->nameGetter() << endl;
         cout << endl;
         cout << "    .--._____,                                             `_____.--.     " << endl;
         cout << "  .-='=='==-, \"                                  0       \" `-=='=='==.  " << endl;
         cout << " (O_o_o_o_o_O)                                              (O_o_o_o_o_O) " << endl;
         Sleep(500);
         system("cls");
         cout << "   " << charkter1->nameGetter();
         cout << "                                    " << charkter2->nameGetter() << endl;
         cout << endl;
         cout << "    .--._____,                                             `_____.--.     " << endl;
         cout << "  .-='=='==-, \"                                      0   \" `-=='=='==.  " << endl;
         cout << " (O_o_o_o_o_O)                                              (O_o_o_o_o_O) " << endl;
         Sleep(500);
         system("cls");
         cout << "   " << charkter1->nameGetter();
         cout << "                                    " << charkter2->nameGetter() << endl;
         cout << endl;
         cout << "    .--._____,                                             `_____.--.     " << endl;
         cout << "  .-='=='==-, \"                                           \" `-=='=='==.  " << endl;
         cout << " (O_o_o_o_o_O)                                               (O_o_o_o_o_O) " << endl;
         cout << endl;
         Sleep(500);
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

