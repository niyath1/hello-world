/**
 * @file main.cpp
 * @brief A simple C++ program to add two integers.
 * @author Niyathi Vasasali
 * @date 05-02-2025
 */

#include <iostream>

/**
 * @brief Adds two integers.
 * 
 * This function takes two integer values, adds them, and returns the result.
 * 
 * @param a First integer
 * @param b Second integer
 * @return Sum of a and b
 */
 
int add(int a, int b) {
    return a + b;
}

/**
 * @brief Main function of the program.
 * 
 * This function prompts the user for two integers, adds them using the add function, 
 * and prints the result.
 * 
 * @return int Program exit status
 */
int main() {
    int x, y;
    
    std::cout << "Enter two numbers: ";
    std::cin >> x >> y;

    std::cout << "Sum: " << add(x, y) << std::endl;

    return 0;
}
