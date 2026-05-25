#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of levels for the Hallow Pyramid: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        // Print spaces
        for (int j = 0; j < n - i; ++j) {
            std::cout << " ";
        }
        // Print stars
        for (int k = 0; k < 2 * i - 1; ++k) {
            if (k == 0 || k == 2 * i - 2 || i == n) {
            std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}