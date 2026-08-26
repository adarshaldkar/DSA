#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int low=0;
        int high = k-1;
        int sum=0;
        int res=0;
        
        
        for(int i=0;i<=high;i++){
            sum+=arr[i];
        }
        while(high<=n){
            res=max(res,sum);
            low++;
            high++;
            
            if(high==n){
                break;
            }
            
            sum=sum - arr[low - 1];
            sum=sum + arr[high];
        }
        return res;
        
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;

    // Example 1
    vector<int> arr1 = {100, 200, 300, 400};
    int k1 = 2;
    cout << "Example 1 Output: " << sol.maxSubarraySum(arr1, k1) << " (Expected: 700)\n";

    // Example 2
    vector<int> arr2 = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k2 = 4;
    cout << "Example 2 Output: " << sol.maxSubarraySum(arr2, k2) << " (Expected: 39)\n";

    // Example 3
    vector<int> arr3 = {100, 200, 300, 400};
    int k3 = 1;
    cout << "Example 3 Output: " << sol.maxSubarraySum(arr3, k3) << " (Expected: 400)\n";

    return 0;
}
