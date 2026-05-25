#include<iostream>
using namespace std;   

int main() {
    int n;
    cout << "Enter the number of levels for Pascal's Triangle: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        // Print spaces
        for (int j = 0; j < n - i - 1; ++j) {
            cout << " ";
        }
        // Print numbers
        int number = 1; // First number in a row is always 1
        for (int k = 0; k <= i; ++k) {
            cout << number << " ";
            // Calculate the next number using the formula: C(n, k) = C(n, k-1) * (n - k + 1) / k
            number = number * (i - k) / (k + 1);
        }
        cout << endl;
    }

    return 0;
}