#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Problem: Minimum Sum Subarray
// Approach: Kadane's Algorithm Variant (Minimization)
// Time Complexity: O(N)
// Space Complexity: O(1)

class Solution {
public:
    int minSubArray(vector<int>& nums) {
        int bestEnding = nums[0];
        int ans = nums[0];
        int n = nums.size();

        for (int i = 1; i < n; i++) {
            int v1 = bestEnding + nums[i];
            int v2 = nums[i];

            bestEnding = min(v1, v2);
            ans = min(bestEnding, ans);
        }

        return ans;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {3, -4, 2, -3, -1, 7, -5};
    cout << "Test Case 1 - Input: [3, -4, 2, -3, -1, 7, -5]" << endl;
    cout << "Minimum Subarray Sum: " << sol.minSubArray(nums1) << endl << endl;

    vector<int> nums2 = {2, 6, 8, 1, 4};
    cout << "Test Case 2 - Input: [2, 6, 8, 1, 4]" << endl;
    cout << "Minimum Subarray Sum: " << sol.minSubArray(nums2) << endl << endl;

    vector<int> nums3 = {-1, -2, -3, -4};
    cout << "Test Case 3 - Input: [-1, -2, -3, -4]" << endl;
    cout << "Minimum Subarray Sum: " << sol.minSubArray(nums3) << endl;

    return 0;
}