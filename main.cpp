#include <iostream>
#include <Player.h>
#include <Charkter.h>
#include <Bot.h>
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
void playerAbilityUse(Charkter* player1, Charkter* player2){
    if(player1->human == false){
        int abilityRandomNumber = 1 + rand()%2;
        if(abilityRandomNumber == 1){
            cout << player1->nameGetter() << " Choose to use: " << player1->ability1Getter() << endl;
            Sleep(3000);
            tanksDrawerFiringAbility(abilityConvertor(player1->ability1Getter()),player1,player2);
            attackMove(player1,player1->ability1Getter(),player2);
        }
        else
        {
            cout << player1->nameGetter() << " Chosses to use: " << player1->ability2Getter() << endl;
            Sleep(3000);
            tanksDrawerFiringAbility(abilityConvertor(player1->ability2Getter()),player1,player2);
            attackMove(player1,player1->ability2Getter(),player2);
        }
        return;
    }
    player1->getAbilitiesInfo();
    int input;
    while(true){
        cout << "Which Ability you want to use (1-2): ";
        cin >> input;
        if(input == 1 || input == 2){break;};
    }
    if(input == 1){
        tanksDrawerFiringAbility(abilityConvertor(player1->ability1Getter()),player1,player2);
        attackMove(player1,player1->ability1Getter(),player2);
    }
    else{
        tanksDrawerFiringAbility(abilityConvertor(player1->ability2Getter()),player1,player2);
        attackMove(player1,player1->ability2Getter(),player2);
    }
}
void playersGenerator(Charkter* charkters[],CharkterFabrik* playersFabrik, int NumberOfPlayers){
    int numberOfBots = 0;
    for(int i = 0; i < NumberOfPlayers; i++){
        system("cls");
        if(numberOfBots < NumberOfPlayers/2){
            int playerOrComputer;
            cout << "Player " << i+1 << " is PLayer or Computer PLayer(1)-Computer(2):";
            cin >> playerOrComputer;
            if(playerOrComputer == 1){charkters[i] = playerChoose(playersFabrik,i+1);}
            else{
                charkters[i] = new Bot();
                numberOfBots++;
            }
        }
        else{
            charkters[i] = playerChoose(playersFabrik,i+1);
        }
    }
}
int numberOfPLayers(){
    system("cls");
    int NumberOfPLayers;
    while(true){
        cout << "How Many Players (2 or 4): ";
        cin >> NumberOfPLayers;
        if(NumberOfPLayers == 2 || NumberOfPLayers == 4){break;}
    }
    return NumberOfPLayers;
}
void teamsGenerator(Charkter* team1[],Charkter* team2[], Charkter* charkters[],int numberOfPLayers){
    int team1Counter = 0;
    int team2Counter = 0;
    int counter = 0;
    while(counter < numberOfPLayers){
        int randomNumber = 1 + rand()%2;
        if(randomNumber == 1){
            if(team1Counter == 2){continue;}
            team1[team1Counter] = charkters[counter];
            team1Counter++;
            counter++;
        }
        else{
            if(team2Counter == 2){continue;}
            team2[team2Counter] = charkters[counter];
            team2Counter++;
            counter++;
        }
    }
}
bool healthChecker(Charkter* charkters[], int numberOfPlayers){
    for(int i = 0 ; i < numberOfPlayers ; i++){
        if(charkters[i]->healthGetter() <= 0){
            return false;
        }
    }
    return true;
}
void teamsPrinter(Charkter* team1[], Charkter* team2[]){
    cout << "\n\n Team 1:" << endl;
    cout << "1- " << team1[0]->nameGetter()<< endl;
    cout << "2- " << team1[1]->nameGetter()<< endl;
    cout << "Team 2:" << endl;
    cout << "1- " << team2[0]->nameGetter()<< endl;
    cout << "2- " << team2[1]->nameGetter()<< endl;
    cout << endl;
 }
int getInput(Charkter* character) {
    int input;
    while (true) {
        cout << character->nameGetter() << ":" << endl;
        cout << "which one do you want to Attack (1-2): ";
        cin >> input;
        if (input == 1 || input == 2) {
            break;
        }
    }
    return input;
}
bool round(Charkter* characters[], int numberOfPlayers, bool teams) {
    Charkter* team1[2];
    Charkter* team2[2];
    if (teams) {
        teamsGenerator(team1, team2, characters, numberOfPlayers);
    }
    while (true) {
        tanksDrawer(characters, numberOfPlayers);
        if (teams) {
            for (int i = 0; i < 2; i++) {
                tanksDrawer(characters, numberOfPlayers);
                teamsPrinter(team1, team2);
                int team1Choose = (team1[i]->human == false) ? 1 + rand() % 2 : getInput(team1[i]);
                playerAbilityUse(team1[i], team2[team1Choose - 1]);
                tanksDrawer(characters, numberOfPlayers);
                teamsPrinter(team1, team2);
                if (!healthChecker(characters, numberOfPlayers)) {
                    team1[i]->wins++;
                    team2[team1Choose]->loses++;
                    return false;
                }
                int team2Choose = (team2[i]->human == false) ? 1 + rand() % 2 : getInput(team2[i]);
                playerAbilityUse(team2[i], team1[team2Choose - 1]);
                if (!healthChecker(characters, numberOfPlayers)) {
                    team2[i]->wins++;
                    team1[team2Choose]->loses++;
                    return false;
                }
            }
        } else {
            for (int i = 0; i < 2; i++) {
                cout << characters[i]->nameGetter() << " turn:" << endl;
                playerAbilityUse(characters[i], characters[1 - i]);
                if (!healthChecker(characters, numberOfPlayers)) {
                    characters[i]->wins++;
                    characters[1 - i]->loses++;
                    return false;
                }
                tanksDrawer(characters, numberOfPlayers);
            }
        }
    }
}
void charcktersAttributeRestarter(Charkter* charkters[], int numberofPlayers){
    for(int i = 0 ; i < numberofPlayers; i++){
        charkters[i]->attributesRestarter();
    }
}
int main()
{
    srand(time(0));
    CharkterFabrik* playersFabrik = new CharkterFabrik();
    startScreen();
    int NumberOfPlayers = numberOfPLayers();
    Charkter* charkters[NumberOfPlayers];
    playersGenerator(charkters, playersFabrik , NumberOfPlayers);
    tanksDrawer(charkters,NumberOfPlayers);
    bool teams = false;
    if(NumberOfPlayers > 2){teams = true;}
    while(true){
        if(round(charkters,NumberOfPlayers,teams) == false){
            char input;
            while(true){
                cout << "Do u Want to Continue(y-n): ";
                cin >> input;
                if(input == 'y' || input == 'n'){break;}
            }
            if(input == 'n'){
                gameOverScreen();
                return 0;
            }
            charcktersAttributeRestarter(charkters,NumberOfPlayers);
        }
    }
}
