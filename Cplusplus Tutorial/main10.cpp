#include <iostream>

using namespace std;

void sayHi(string name, int age) {

    cout << "Hello " << name << ", you are " << age << " years old" << endl;
}
int main() {

    sayHi("Johann",25);
    return 0;
}
