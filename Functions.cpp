#include <iostream>

using namespace std;

// Function to multiply two integers with return type
int multiply(int a, int b) {
    int product = a * b;
    return product;
}

int main() {
    int num1TN, num2TN, productTN;

    cout << "Enter number 1: ";
    cin >> num1TN;

    cout << "Enter number 2: ";
    cin >> num2TN;

    // Call the multiply function to perform the multiplication
    productTN = multiply(num1TN, num2TN);

    cout << "The product of " << num1TN << " and " << num2TN << " is: " << productTN << endl;

    return 0;
}
