#include <iostream>

using namespace std;

int main()
{

    int num;
    int guess;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "****** Number Guessing Game ******\n";

    do
    {
        cout << "Enter a guess between (1-100): ";
        cin >> guess;

        if (guess > num)
        {
            cout << "Too hight!\n";
        }
        else if (guess < num)
        {
            cout << "Too low!\n";
        }
        else
        {
            cout << "Correct!" << '\n';
        }
    } while (guess != num);

    cout << "**********************************\n";

    return 0;
}