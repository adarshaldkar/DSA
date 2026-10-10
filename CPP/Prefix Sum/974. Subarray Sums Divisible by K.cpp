#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// LeetCode 974: Subarray Sums Divisible by K
// Approach: Prefix Sum with Modulo Frequency (Hash Map / Array)
// Time Complexity: O(N)
// Space Complexity: O(K)

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // remainderCount stores the frequency of each remainder
        // remainderCount[0] = 1 handles subarrays starting from index 0
        vector<int> remainderCount(k, 0);
        remainderCount[0] = 1;

        int prefixSum = 0;
        int count = 0;

        for (int num : nums) {
            prefixSum += num;

            // Normalize remainder to handle negative values in C++
            // e.g., (-1 % 5 + 5) % 5 = 4
            int rem = (prefixSum % k + k) % k;

            // If this remainder has been seen before, each previous occurrence
            // forms a valid subarray whose sum is divisible by k
            count += remainderCount[rem];

            remainderCount[rem]++;
        }

        return count;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Standard case with positive and negative numbers
    vector<int> nums1 = {4, 5, 0, -2, -3, 1};
    int k1 = 5;
    cout << "Test Case 1 - Input: nums = [4, 5, 0, -2, -3, 1], k = 5" << endl;
    cout << "Subarrays Divisible by K: " << sol.subarraysDivByK(nums1, k1) << " (Expected: 7)" << endl << endl;

    // Test Case 2: Single element not divisible
    vector<int> nums2 = {5};
    int k2 = 9;
    cout << "Test Case 2 - Input: nums = [5], k = 9" << endl;
    cout << "Subarrays Divisible by K: " << sol.subarraysDivByK(nums2, k2) << " (Expected: 0)" << endl << endl;

    // Test Case 3: Negative numbers
    vector<int> nums3 = {-1, 2, 9};
    int k3 = 2;
    cout << "Test Case 3 - Input: nums = [-1, 2, 9], k = 2" << endl;
    cout << "Subarrays Divisible by K: " << sol.subarraysDivByK(nums3, k3) << " (Expected: 2)" << endl << endl;

    // Test Case 4: All numbers divisible by k
    vector<int> nums4 = {5, 10, 15};
    int k4 = 5;
    cout << "Test Case 4 - Input: nums = [5, 10, 15], k = 5" << endl;
    cout << "Subarrays Divisible by K: " << sol.subarraysDivByK(nums4, k4) << " (Expected: 6)" << endl;

    return 0;
}
