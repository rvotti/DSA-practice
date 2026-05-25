/*Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.
*/
#include<iostream>
using namespace std;
string reverseWords(string s) {
    string result;
    int end = s.length() - 1;

    for (int i = s.length() - 1; i >= 0; --i) {
        if (s[i] == ' ') {
            if (end > i) {
                result += s.substr(i + 1, end - i) + " ";
            }
            end = i - 1;
        }
    }
    // Add the first word
    if (end >= 0) {
        result += s.substr(0, end + 1);
    }
    // Remove trailing space if it exists
    if (!result.empty() && result.back() == ' ') {
        result.pop_back();
    }
    return result;
}   
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    string result = reverseWords(s);
    cout << "Reversed words: " << result << endl;

    return 0;
}   