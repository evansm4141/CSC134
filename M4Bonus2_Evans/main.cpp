/* CSC 134
M4BONUS2
Melody Evans
3-28-22 */
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Sleeping Dogs II\n";
    //declare vars
    string gameStart;
    //user input
    cout << "Would you like to start a new game or quit game?\n";
    cout << "Enter [Start] or [Quit]\n";
    cin >> gameStart;
    //branches
    if (gameStart=="Start") {
        cout << "Welcome to Hong Kong.\n\n";
    }
    else if (gameStart=="Quit") {
        cout << "You have exited the game.\n";
    }
    else {
        cout << "Invalid input\n";
    }
    while (gameStart!="Start" || gameStart!="Quit") {
        cout << "Enter [Start] or [Quit]\n";
        cin >> gameStart;
    }

    return 0;
}
