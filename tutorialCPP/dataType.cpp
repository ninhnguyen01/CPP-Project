#include <iostream>

using namespace std;

int main()
{
    int x; // declaration
    x = 7; // assignment

    int y;
    y = 3;
    int sum = x + y;

    // integer (whole number)
    int age = 25;
    int year = 2025;
    int dayNumber = 6;

    // double (number with decimal)
    double price = 19.99;
    double testScore = 79.7;

    // char (single character)
    char grade = 'A';
    char initial = 'K';
    char currency = '$';

    // boolean (true or false)
    bool youCanCode = true;
    bool YouWillGiveUp = false;

    // string (an object that represent text)
    string name = "Bruder";
    string food = "Hotpot";
    string day = "Tuesday";
    string address = "1234 Code St";

    cout << "The value of x is: " << x << endl;
    cout << "The value of x + y is: " << sum << endl;
    cout << "A person can be " << age << " and started coding later in life in the year " << year
         << ". This person may have started on a Friday, which is day " << dayNumber << "." << endl;
    cout << "An item can have a price of: $" << price << " and a test score can be: " << testScore << endl;
    cout << "Get an " << grade << " grade, " << initial << ". " << "So you can make " << currency << "." << endl;
    cout << "Can code: (true) " << youCanCode << endl;
    cout << "Give up on coding: (false) " << YouWillGiveUp << endl;
    cout << "You are a " << name << ". Do you want to eat " << food << "?" << endl;
    cout << "Today is " << day << "." << endl;
    cout << "You mentally live at " << address << endl;

    return 0;
}