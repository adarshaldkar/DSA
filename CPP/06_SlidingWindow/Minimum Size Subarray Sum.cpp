#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int sum = 0;
        int ans = INT_MAX;

        for (int right = 0; right < n; right++) {
            sum += nums[right];

            while (sum >= target) {
                ans = min(ans, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }

        return (ans == INT_MAX) ? 0 : ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;

    // Example 1
    vector<int> nums1 = {2, 3, 1, 2, 4, 3};
    int target1 = 7;
    cout << "Example 1 Output: " << sol.minSubArrayLen(target1, nums1) << " (Expected: 2)\n";

    // Example 2
    vector<int> nums2 = {1, 4, 4};
    int target2 = 4;
    cout << "Example 2 Output: " << sol.minSubArrayLen(target2, nums2) << " (Expected: 1)\n";

    // Example 3
    vector<int> nums3 = {1, 1, 1, 1, 1, 1, 1, 1};
    int target3 = 11;
    cout << "Example 3 Output: " << sol.minSubArrayLen(target3, nums3) << " (Expected: 0)\n";

    return 0;
}
