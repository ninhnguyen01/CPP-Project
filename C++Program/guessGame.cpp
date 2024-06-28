#include <iostream>

using namespace std;

int main() {

    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfguesses = false;

    while (secretNum != guess && !outOfguesses) {
        if (guessCount < guessLimit) {
            cout << "Enter guess:" << endl;
            cin >> guess;
            guessCount ++;
        }
        else {
            outOfguesses = true;
        }
    }
        if (outOfguesses) {
        cout << "You lose!" << endl;
         }
        else {
        cout << "You Win!" << endl;
    }
    return 0;
}
