#include <iostream>
#include <cmath>

using namespace std;

// Right Angled Triangle
int main()
{
    double a;
    double b;
    double c;

    cout << "Enter side A: ";
    cin >> a;

    cout << "Enter side B: ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "Side C: " << c;

    return 0;
}