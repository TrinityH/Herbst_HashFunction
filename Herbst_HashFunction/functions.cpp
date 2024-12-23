#include <iostream>
#include <string>
#include "functions.h"

// Function to hash a string using a simple hash function
unsigned int simpleHash(const std::string& str) {
	// Initialize the hash value to 0
    unsigned int hash = 0;
	// Iterate over each character in the string
    for (char c : str) {
		// Multiply the current hash value by 31 and add the ASCII value of the character
        hash = hash * 31 + c;
    }
	// Return the final hash value
    return hash;
}