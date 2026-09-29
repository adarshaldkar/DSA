#include <iostream>
#include <vector>

using namespace std;

// LeetCode 287: Find the Duplicate Number
// Approach 2: Binary Search on Search Space [1, n]
// Time Complexity: O(N log N)
// Space Complexity: O(1)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int low = 1;
        int high = nums.size() - 1;
        int duplicate = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Count how many numbers are less than or equal to mid
            int count = 0;
            for (int num : nums) {
                if (num <= mid) {
                    count++;
                }
            }

            // According to Pigeonhole Principle, if count > mid,
            // the duplicate lies in the range [low, mid]
            if (count > mid) {
                duplicate = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return duplicate;
    }
};

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
