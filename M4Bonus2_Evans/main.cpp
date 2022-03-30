/* CSC 134
M4BONUS2
Melody Evans
3-28-22 */
#include <iostream>
using namespace std;

//function prototypes
int newGame();
int menuOptions();
int quitGame();

int main() {
    cout << "Welcome to Sleeping Dogs II\n\n";
    //declare vars
    string gameStart;
    //menu options
    cout << "1: Start New Game\n";
    cout << "2: Options\n";
    cout << "3: Quit Game\n\n";
    //user input
    cout << "Would you like to start a new game or quit game?\n";
    cout << "Enter [Start], [Options], or [Quit]\n";
    cin >> gameStart;
    //branches
    if (gameStart=="Start") {
        cout << "\nLoading new game...\n\n";
        newGame();
    }
    else if (gameStart=="Options") {
        cout << "\nSetting up your options...\n\n";
        menuOptions();
    }
    else if (gameStart=="Quit") {
        cout << "\nYou are leaving Hong Kong...\n";
        quitGame();
    }
    else { //user made invalid choice
        cout << "\nInvalid input\n";
        //cin.ignore();
    }
    while (gameStart!="Start" && gameStart!="Quit" && gameStart!="Options") {
        cout << "Please enter [Start], [Options], or [Quit]\n";
        cin >> gameStart;
    }

    return 0;
}

int newGame() {
    cout << "Welcome to Hong Hong.\n";
    return 1;
}
int menuOptions() {
    cout << "You are in the options menu.\n";
    cout << "What would you like to do?\n";
    return 2;
}
int quitGame () {
    cout << "Goodbye.\n";
    return 3;
}
