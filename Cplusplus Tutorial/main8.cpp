#include <iostream>

using namespace std;

void name() {

    string name;
    cout << "Enter your name: " << endl;
    getline(cin, name);
    cout << "Hello " << name << endl;
}

int main() {

    name();
    return 0;
}
