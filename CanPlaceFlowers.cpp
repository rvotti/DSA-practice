/*
You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise
*/
#include<iostream>
#include<vector>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int count = 0;
    for (size_t i = 0; i < flowerbed.size(); ++i) {
        if (flowerbed[i] == 0) {
            bool emptyLeft = (i == 0) || (flowerbed[i - 1] == 0);
            bool emptyRight = (i == flowerbed.size() - 1) || (flowerbed[i + 1] == 0);
            if (emptyLeft && emptyRight) {
                flowerbed[i] = 1; // Plant a flower here
                count++;
                if (count >= n) {
                    return true; // We have planted enough flowers
                }
            }
        }
    }
    return count >= n; // Check if we were able to plant enough flowers
}   
int main() {
    int n;
    cout << "Enter the number of new flowers to plant: ";
    cin >> n;
    int size;
    cout << "Enter the size of the flowerbed: ";
    cin >> size;
    vector<int> flowerbed(size);
    cout << "Enter the flowerbed (0 for empty, 1 for not empty): ";
    for (int i = 0; i < size; ++i) {
        cin >> flowerbed[i];
    }

    bool result = canPlaceFlowers(flowerbed, n);
    cout << (result ? "true" : "false") << endl;

    return 0;
}