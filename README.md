# Function-
Programming Foundations I: Complete the algorithm with given functions

1. a function that multiplies two integers passed to it as parameters and returns the result of the multiplication. Be sure to call this function in the main function.

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// FunctionExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

 

//function with return type
int addWithReturn(int a, int b) {
int total = a + b;
//cout << "Total from add function: " << total;

return total;
}//end addWithReturn

 


//function that adds two numbers
void add(int a, int b) {
int total = a + b;
cout << "Total from add function: " << total;

}//end add function

int main()
{

//program to add two numbers
int num1 = 0;//local vaiable
int num2 = 0;//local variable
int total = 0;

cout << "Enter number 1: ";
cin >> num1;

cout << "Enter number 2: ";
cin >> num2;

//total = num1 + num2;
//cout << "Total " << total;

add(num1, num2);//function call

int totalReturned = addWithReturn(num1,num2);

cout << "\ntotalReturned has " << (totalReturned) ;


}
