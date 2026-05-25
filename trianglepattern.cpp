#include <iostream>
using namespace std;

int main() {
    int n;
    std::cout << "Enter the number of levels for the Triangle Pattern: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        // Print spaces
        for (int j = 0; j < n - i; ++j) {
            std::cout << " ";
        }
        // Print stars
        for (int k = 0; k < 2 * i - 1; ++k) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}