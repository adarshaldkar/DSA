// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation: 
// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
// The distinct triplets are [-1,0,1] and [-1,-1,2].
// Notice that the order of the output and the order of the triplets does not matter.
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>nums={-1,0,1,2,-1,-4};
    sort (nums.begin(),nums.end());
    vector<vector<int>>res;
    int n=nums.size();
    for(int i=0; i<n; i++){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
    int left=i+1;
    int right=n-1;
    int target=-1*nums[i];
    while(left<right){
        int sum=nums[left]+nums[right];
        if(sum==target){
            res.push_back({nums[i],nums[left],nums[right]});
            while(left<right && nums[left]==nums[left+1]){
                left++;
            }
            while(left<right && nums[right]==nums[right-1]){
                right--;
            }
            // left++;
            // right--;
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
}

for (auto &t : res) {
        cout << "[" << t[0] << "," << t[1] << "," << t[2] << "]\n";
    }
    return 0;
}