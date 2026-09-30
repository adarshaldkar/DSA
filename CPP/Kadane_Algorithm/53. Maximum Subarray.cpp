#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// LeetCode 53: Maximum Subarray
// Approach: Kadane's Algorithm
// Time Complexity: O(N)
// Space Complexity: O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bestEnding = nums[0];
        int ans = nums[0];
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            int v1 = bestEnding + nums[i];
            int v2 = nums[i];

            bestEnding = max(v1, v2);
            ans = max(bestEnding, ans);
        }
        return ans;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Test Case 1 - Input: [-2, 1, -3, 4, -1, 2, 1, -5, 4]" << endl;
    cout << "Maximum Subarray Sum: " << sol.maxSubArray(nums1) << endl << endl;

    vector<int> nums2 = {1};
    cout << "Test Case 2 - Input: [1]" << endl;
    cout << "Maximum Subarray Sum: " << sol.maxSubArray(nums2) << endl << endl;

    vector<int> nums3 = {5, 4, -1, 7, 8};
    cout << "Test Case 3 - Input: [5, 4, -1, 7, 8]" << endl;
    cout << "Maximum Subarray Sum: " << sol.maxSubArray(nums3) << endl << endl;

    vector<int> nums4 = {-1, -2, -3, -4};
    cout << "Test Case 4 - Input: [-1, -2, -3, -4]" << endl;
    cout << "Maximum Subarray Sum: " << sol.maxSubArray(nums4) << endl;

    return 0;
}