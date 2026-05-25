/*
There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.

Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

Note that multiple kids can have the greatest number of candies.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> result(candies.size());
    int maxCandies = *max_element(candies.begin(), candies.end());

    for (size_t i = 0; i < candies.size(); ++i) {
        result[i] = (candies[i] + extraCandies >= maxCandies);
    }

    return result;
}

int main() {
    int n, extraCandies;
    cout << "Enter the number of kids: ";
    cin >> n;
    int candies[n];
    cout << "Enter the number of candies each kid has: ";
    for (int i = 0; i < n; ++i) {
        cin >> candies[i];
    }
    cout << "Enter the number of extra candies: ";
    cin >> extraCandies;

    // Find the maximum number of candies any kid has
    int maxCandies = 0;
    for (int i = 0; i < n; ++i) {
        if (candies[i] > maxCandies) {
            maxCandies = candies[i];
        }
    }

    // Create a boolean array to store the results
    bool result[n];
    for (int i = 0; i < n; ++i) {
        result[i] = (candies[i] + extraCandies >= maxCandies);
    }

    // Print the results
    cout << "Result: ";
    for (int i = 0; i < n; ++i) {
        cout << (result[i] ? "true" : "false") << " ";
    }
    cout << endl;

    return 0;
}