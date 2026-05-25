#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of levels for the hallow Diamond Pattern: ";
    cin >> n;
    //write a program to print hallow diamond pattern
    /*   🧪 PATTERN 3: Hallow Diamond Pattern 💎✨
        *
       * *
      *   *
     *     *
      *   *
       * *
        *
    */
   //below code is not correct, it will print a solid diamond pattern, we need to modify it to print a hallow diamond pattern
    // Upper half of the hallow diamond

    for (int i = 1; i <= n; ++i) {
        // Print spaces
        for (int j = 0; j < n - i; ++j) {
            cout << " ";
        }
        // Print stars
        for (int k = 0; k < 2 * i - 1; ++k) {
            if (k == 0 || k == 2 * i - 2) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    // Lower half of the hallow diamond
    for (int i = n - 1; i >= 1; --i) {
        // Print spaces
        for (int j = 0; j < n - i; ++j) {
            cout << " ";
        }
        // Print stars
        for (int k = 0; k < 2 * i - 1; ++k) {
            if (k == 0 || k == 2 * i - 2) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}