#include <iostream>

using namespace std;

int main()
{
    const double PI = 3.14159;
    double radius;
    cout << "Enter Circle Radius: ";
    cin >> radius;
    double circumference = 2 * PI * radius;
    cout << "The circumference is: " << circumference << " cm" << endl;

    return 0;
}