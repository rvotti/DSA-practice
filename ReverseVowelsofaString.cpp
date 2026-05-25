/*
Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.
*/
#include<iostream>
#include<string>
using namespace std;
string reverseVowels(string s) {
    const string vowels = "aeiouAEIOU";
    int left = 0, right = s.length() - 1;

    while (left < right) {
        while (left < right && vowels.find(s[left]) == string::npos) {
            left++;
        }
        while (left < right && vowels.find(s[right]) == string::npos) {
            right--;
        }
        if (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }

    return s;
}
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    string result = reverseVowels(s);
    cout << "String after reversing vowels: " << result << endl;

    return 0;
}   