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

        int maxEnding=nums[0];
        int minEnding = nums[0];
        int res=nums[0];
        int n=nums.size();
        for(int i=1; i<n; i++){
            int v1=maxEnding * nums[i];
            int v2=minEnding * nums[i];
            int v3=nums[i];

            maxEnding=max(v1,max(v2,v3));
            minEnding=min(v1,min(v2,v3));
            res=max(res,(max(maxEnding,minEnding)));
        }
        return res;
}
};