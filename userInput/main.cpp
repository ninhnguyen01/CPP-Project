#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    int age;
    double price;
    int quantity;
    double total;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cout << "\nWelcome " << name << endl;
    cout << "Age: " << age << endl;

    cout << "\nEnter price of the item: ";
    cin >> price;

    cout << "Enter item quantity: ";
    cin >> quantity;

    total = price * quantity;
    cout << "Price Total: $" << total << endl;

    return 0;
}