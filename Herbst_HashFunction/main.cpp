// Author: Trinity Herbst

#include <iostream>
#include <string>
#include "functions.h"

using namespace std;



int main() {
	//Declare a string variable to store the user input
    string input;
	//Prompt the user to enter a string to hash
    cout << "Enter a string to hash: ";
	//Get the user input
    getline(std::cin, input);
	//Call the simpleHash function and pass the user input as an argument
    int hashValue = simpleHash(input);
	//Output the hash value
    cout << "Hash value: " << hashValue << std::endl;

    return 0;
}