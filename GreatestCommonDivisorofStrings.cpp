#include<iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
string gcdOfStrings(string str1, string str2) {
    if (str1 + str2 != str2 + str1) {
        return "";
    }
    int lengthGCD = gcd(str1.length(), str2.length());
    return str1.substr(0, lengthGCD);
}
int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    if (str1 + str2 != str2 + str1) {
        cout << "No common divisor string exists." << endl;
        return 0;
    }

    int lengthGCD = gcd(str1.length(), str2.length());
    string result = str1.substr(0, lengthGCD);
    
    cout << "Greatest Common Divisor of the strings: " << result << endl;

    return 0;
}