/*
Given an integer array nums, move all 0's to the end of it 
while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.
*/
#include<iostream>
#include<vector>   
using namespace std;
void moveZeroes(vector<int>& nums) {
    int lastNonZeroFoundAt = 0; // Pointer to track the position of the last non-zero element

    // Move all non-zero elements to the front of the array
    for (size_t i = 0; i < nums.size(); ++i) {
        if (nums[i] != 0) {
            nums[lastNonZeroFoundAt++] = nums[i];
        }
    }

    // Fill the remaining positions with zeros
    for (size_t i = lastNonZeroFoundAt; i < nums.size(); ++i) {
        nums[i] = 0;
    }
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    moveZeroes(nums);
    cout << "Array after moving zeroes: ";
    for (int i = 0; i < nums.size(); ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}