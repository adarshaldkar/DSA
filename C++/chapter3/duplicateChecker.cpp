
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.empty()) return 0;
        
        
        int a = 0;      
        int unique = 1; 
        int count = 1;  
        int n = nums.size();
        
        while(count < n) {
            
            if(count > 0 && nums[count] == nums[count-1]) {
                count++;
                continue;
            }
            
            nums[a] = nums[count];
            a++;
            unique++;
            count++;
        }
        
        return unique;
    }
};

// Test function
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    
    cout << "Original array: ";
    for(int num : nums) cout << num << " ";
    cout << endl;
    
    Solution sol;
    int uniqueCount = sol.removeDuplicates(nums);
    
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < uniqueCount; i++) {
        cout << nums[i] << " ";
    }
    for(int i = uniqueCount; i < 10; i++) {
        cout << "_ ";
    }
    cout << endl;
    
    cout << "Number of unique elements: " << uniqueCount << endl;
    
    return 0;
}