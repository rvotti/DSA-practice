/*
🧪 PATTERN 2: Butterfly Pattern 🦋🔥
*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *
*/
#include <iostream>

int main()  {
    int n;
    std::cout << "Enter the number of levels for the Butterfly Pattern: ";
    std::cin >> n;

    // Upper half of the butterfly
    for (int i = 1; i <= n; ++i) {
        // Print left stars
        for (int j = 0; j < i; ++j) {
            std::cout << "*";
        }
        // Print spaces
        for (int k = 0; k < 2 * (n - i); ++k) {
            std::cout << " ";
        }
        // Print right stars
        for (int j = 0; j < i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Lower half of the butterfly
    for (int i = n; i >= 1; --i) {
        // Print left stars
        for (int j = 0; j < i; ++j) {
            std::cout << "*";
        }
        // Print spaces
        for (int k = 0; k < 2 * (n - i); ++k) {
            std::cout << " ";
        }
        // Print right stars
        for (int j = 0; j < i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}