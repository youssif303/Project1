#include <iostream>
using namespace std;
int main() {
    // Declare variables to store the input values
    int num1, num2, sum;

    // Prompt the user to enter two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate the sum
    sum = num1 + num2;

    // Display
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << std::endl;

    return 0;
}
