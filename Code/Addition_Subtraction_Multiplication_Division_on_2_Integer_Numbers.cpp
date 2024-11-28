#include <iostream>
using namespace std;

int main() {
    // Declare two integers
    int num1, num2;

    // Input the two integers
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    // Perform operations
    int addition = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;
    double division;

    // Check for division by zero
    if (num2 != 0) {
        division = (double)(num1) / num2; // Explicitly cast num1 to double during division
    } else {
        cout << "Division by zero is not allowed." << endl;
        return 1; // Exit with an error code
    }

    // Display the results
    cout << "Addition: " << addition << endl;
    cout << "Subtraction: " << subtraction << endl;
    cout << "Multiplication: " << multiplication << endl;
    cout << "Division: " << division << endl;

    return 0;
}   
