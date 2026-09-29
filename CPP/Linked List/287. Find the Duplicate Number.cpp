#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// LeetCode 287: Find the Duplicate Number
// Approach 1: Sorting
// Time Complexity: O(N log N)
// Space Complexity: O(1)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] == nums[i - 1]) {
                return nums[i];
            }
        }

        return -1;
    }
};

//Soln number_1

int main() {
    Solution sol;

    vector<int> nums1 = {1, 3, 4, 2, 2};
    cout << "Test Case 1 - Input: [1, 3, 4, 2, 2]" << endl;
    cout << "Duplicate Number: " << sol.findDuplicate(nums1) << endl << endl;

    vector<int> nums2 = {3, 1, 3, 4, 2};
    cout << "Test Case 2 - Input: [3, 1, 3, 4, 2]" << endl;
    cout << "Duplicate Number: " << sol.findDuplicate(nums2) << endl << endl;

    vector<int> nums3 = {3, 3, 3, 3, 3};
    cout << "Test Case 3 - Input: [3, 3, 3, 3, 3]" << endl;
    cout << "Duplicate Number: " << sol.findDuplicate(nums3) << endl;

    return 0;
}
