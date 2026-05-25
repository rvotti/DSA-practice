/*Given an integer array nums, return true if there 
exists a triple of indices (i, j, k) 
such that i < j < k and nums[i] < nums[j] < nums[k].
 If no such indices exists, return false.
*/
#include<iostream>
#include<vector>
using namespace std;
bool increasingTriplet(vector<int>& nums) {
    int first = INT_MAX, second = INT_MAX;

    for (int num : nums) {
        if (num <= first) {
            first = num; // Update the smallest number
        } else if (num <= second) {
            second = num; // Update the second smallest number
        } else {
            return true; // Found a number greater than both first and second
        }
    }

    return false; // No increasing triplet found
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

    bool result = increasingTriplet(nums);
    cout << (result ? "true" : "false") << endl;

    return 0;
}   