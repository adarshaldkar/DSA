#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// LeetCode 152: Maximum Product Subarray
// Approach: Kadane's variant - track both max and min product
// (min needed because negative * negative = positive)
// Time Complexity: O(N)
// Space Complexity: O(1)

class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int maxProd = nums[0];
        int minProd = nums[0];
        int result  = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            // When multiplied by a negative, max becomes min and vice versa
            if (nums[i] < 0) {
                swap(maxProd, minProd);
            }

            maxProd = max(nums[i], maxProd * nums[i]);
            minProd = min(nums[i], minProd * nums[i]);

            result = max(result, maxProd);
        }

        return result;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {2, 3, -2, 4};
    cout << "Test Case 1 - Input: [2, 3, -2, 4]" << endl;
    cout << "Maximum Product Subarray: " << sol.maxProduct(nums1) << endl << endl;

    vector<int> nums2 = {-2, 0, -1};
    cout << "Test Case 2 - Input: [-2, 0, -1]" << endl;
    cout << "Maximum Product Subarray: " << sol.maxProduct(nums2) << endl << endl;

    vector<int> nums3 = {-2, 3, -4};
    cout << "Test Case 3 - Input: [-2, 3, -4]" << endl;
    cout << "Maximum Product Subarray: " << sol.maxProduct(nums3) << endl << endl;

    vector<int> nums4 = {2, -5, -2, -4, 3};
    cout << "Test Case 4 - Input: [2, -5, -2, -4, 3]" << endl;
    cout << "Maximum Product Subarray: " << sol.maxProduct(nums4) << endl;

    return 0;
}