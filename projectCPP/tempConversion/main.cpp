#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char temp;
    char upperTemp;
    double degreeF;
    double degreeC;
    double result;

    cout << "|-----Temperature Conversion Program (°F & °C)-----|\n";

    cout << "" << endl;
    cout << "Enter 1 conversion type (F/C): ";
    cin >> temp;
    upperTemp = toupper(temp);

    switch (upperTemp)
    {
    case 'F':
        cout << "Enter number in Celsius to convert to °F: ";
        cin >> degreeF;
        result = (degreeF * 9 / 5) + 32;
        cout << "Celsius " << degreeF << "°C" << " = " << "Fahrenheit " << result << "°F" << endl;
        break;

    case 'C':
        cout << "Enter number in Fahrenheit to convert to °C: ";
        cin >> degreeC;
        result = (degreeC - 32) * 5 / 9;
        cout << "Fahrenheit " << degreeC << "°F" << " = " << "Celsius " << result << "°C" << endl;
        break;

    default:
        cout << "PLEASE ONLY ENTER 'F' or 'C'\n";
        break;
    }

    cout << "" << endl;
    cout << "|--------------------------------------------------|";

    return 0;
}
