/*
Given an array of characters chars, compress it using the following algorithm:

Begin with an empty string s. For each group of consecutive repeating characters in chars:

If the group's length is 1, append the character to s.
Otherwise, append the character followed by the group's length.
The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.

After you are done modifying the input array, return the new length of the array.

You must write an algorithm that uses only constant extra space.

Note: The characters in the array beyond the returned length do not matter and should be ignored.
*/
#include<iostream>
#include<vector>
using namespace std;
int compress(vector<char>& chars) {
    int writeIndex = 0; // Index to write the compressed characters
    int count = 1; // Count of consecutive characters

    for (size_t i = 1; i <= chars.size(); ++i) {
        if (i < chars.size() && chars[i] == chars[i - 1]) {
            count++;
        } else {
            // Write the character
            chars[writeIndex++] = chars[i - 1];
            // Write the count if greater than 1
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[writeIndex++] = c;
                }
            }
            count = 1; // Reset count for the next character
        }
    }

    return writeIndex; // New length of the compressed array
}
int main() {
    int n;
    cout << "Enter the number of characters: ";
    cin >> n;
    vector<char> chars(n);
    cout << "Enter the characters: ";
    for (int i = 0; i < n; ++i) {
        cin >> chars[i];
    }

    int newLength = compress(chars);
    cout << "Compressed characters: ";
    for (int i = 0; i < newLength; ++i) {
        cout << chars[i] << " ";
    }
    cout << endl;

    return 0;
}