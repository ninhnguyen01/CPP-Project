#include <iostream>

using namespace std;

int main()
{
    char op;
    double num1;
    double num2;
    double result;

    cout << "********** Calculator Program **********" << endl;

    cout << "Enter #1: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter #2: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        cout << "Result: " << num1 << " " << op << " " << num2 << " = " << result << endl;
        break;

    case '-':
        result = num1 - num2;
        cout << "Result: " << num1 << " " << op << " " << num2 << " = " << result << endl;
        break;

    case '*':
        result = num1 * num2;
        cout << "Result: " << num1 << " " << op << " " << num2 << " = " << result << endl;
        break;

    case '/':
        result = num1 / num2;
        cout << "Result: " << num1 << " " << op << " " << num2 << " = " << result << endl;
        break;

    default:
        cout << "\nPlease enter the listed operator (+, -, *, /) ONLY" << endl;
        break;
    }

    cout << "****************************************" << endl;

    return 0;
}