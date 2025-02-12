#include <iostream>
using namespace std;

// Function to perform arithmetic operations
double calculate(double num1, double num2, char operation) {
    switch (operation) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': 
            if (num2 != 0)
                return num1 / num2;
            else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 0;
            }
        default:
            cout << "Error: Invalid operation." << endl;
            return 0;
    }
}

int main() {
    double num1, num2;
    char operation;

    // Taking input from the user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    // Performing calculation and displaying result
    double result = calculate(num1, num2, operation);
    cout << "Result: " << result << endl;
    
    return 0;
}