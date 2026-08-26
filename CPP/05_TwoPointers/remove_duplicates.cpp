#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        
        int a = 1;
        int cm = 1;
        int res = 1;
        int n = nums.size();

        while(cm < n){
            if(nums[cm] == nums[cm-1]){
                cm++;
                continue;
            }
            nums[a] = nums[cm];
            a++;
            cm++;
            res++;
        }
        return res;
    }
};

// Helper function to print array
void printArray(vector<int>& nums, int length) {
    cout << "[";
    for(int i = 0; i < length; i++) {
        cout << nums[i];
        if(i < length - 1) cout << ",";
    }
    cout << "]" << endl;
}

int main() {
    Solution solution;
    
    // Test Case 1: Basic case with duplicates
    cout << "Test Case 1: [1,1,2]" << endl;
    vector<int> nums1 = {1,1,2};
    int result1 = solution.removeDuplicates(nums1);
    cout << "Length: " << result1 << ", Array: ";
    printArray(nums1, result1);
    assert(result1 == 2);
    cout << "PASSED\n" << endl;
    
    // Test Case 2: More duplicates
    cout << "Test Case 2: [0,0,1,1,1,2,2,3,3,4]" << endl;
    vector<int> nums2 = {0,0,1,1,1,2,2,3,3,4};
    int result2 = solution.removeDuplicates(nums2);
    cout << "Length: " << result2 << ", Array: ";
    printArray(nums2, result2);
    assert(result2 == 5);
    cout << "PASSED\n" << endl;
    
    // Test Case 3: No duplicates
    cout << "Test Case 3: [1,2,3,4,5]" << endl;
    vector<int> nums3 = {1,2,3,4,5};
    int result3 = solution.removeDuplicates(nums3);
    cout << "Length: " << result3 << ", Array: ";
    printArray(nums3, result3);
    assert(result3 == 5);
    cout << "PASSED\n" << endl;
    
    // Test Case 4: All same elements
    cout << "Test Case 4: [1,1,1,1]" << endl;
    vector<int> nums4 = {1,1,1,1};
    int result4 = solution.removeDuplicates(nums4);
    cout << "Length: " << result4 << ", Array: ";
    printArray(nums4, result4);
    assert(result4 == 1);
    cout << "PASSED\n" << endl;
    
    // Test Case 5: Single element
    cout << "Test Case 5: [1]" << endl;
    vector<int> nums5 = {1};
    int result5 = solution.removeDuplicates(nums5);
    cout << "Length: " << result5 << ", Array: ";
    printArray(nums5, result5);
    assert(result5 == 1);
    cout << "PASSED\n" << endl;
    
    // Test Case 6: Two identical elements
    cout << "Test Case 6: [1,1]" << endl;
    vector<int> nums6 = {1,1};
    int result6 = solution.removeDuplicates(nums6);
    cout << "Length: " << result6 << ", Array: ";
    printArray(nums6, result6);
    assert(result6 == 1);
    cout << "PASSED\n" << endl;
    
    // Test Case 7: Negative numbers
    cout << "Test Case 7: [-3,-1,-1,0,0,0,0,1,1]" << endl;
    vector<int> nums7 = {-3,-1,-1,0,0,0,0,1,1};
    int result7 = solution.removeDuplicates(nums7);
    cout << "Length: " << result7 << ", Array: ";
    printArray(nums7, result7);
    assert(result7 == 4);
    cout << "PASSED\n" << endl;
    
    cout << "All test cases PASSED! ✓" << endl;
    return 0;
}

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int a=1;
//         int cm=1;
//         int res=1;
//         int n=nums.size();

//         while(cm<n){
//             if(nums[cm] == nums[cm-1]){
//                 cm++;
//                 continue;
//             }
//             nums[a]=nums[cm];
//             a++;
//             cm++;
//             res++;
//         }
//         return res;

        
//     }
// };

// for my reference 
