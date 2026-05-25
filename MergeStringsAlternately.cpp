#include<iostream>
using namespace std; 

int main() {
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;

    string result;
    int maxLength = max(s1.length(), s2.length());

    for (int i = 0; i < maxLength; ++i) {
        if (i < s1.length()) {
            result += s1[i];
        }
        if (i < s2.length()) {
            result += s2[i];
        }
    }

    cout << "Merged string: " << result << endl;

    return 0;
}