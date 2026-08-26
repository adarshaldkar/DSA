#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 2) return nums.size();
        
        int a = 2;  
        
        for(int cm = 2; cm < nums.size(); cm++){
            if(nums[cm] != nums[a-2]){
                nums[a] = nums[cm];
                a++;
            }
        }
        return a;
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
    
    // Test Case 1: Basic case - LeetCode example 1
    cout << "Test Case 1: [1,1,1,2,2,3]" << endl;
    vector<int> nums1 = {1,1,1,2,2,3};
    int result1 = solution.removeDuplicates(nums1);
    cout << "Length: " << result1 << ", Array: ";
    printArray(nums1, result1);
    assert(result1 == 5);  // [1,1,2,2,3]
    cout << "PASSED\n" << endl;
    
    // Test Case 2: LeetCode example 2
    cout << "Test Case 2: [0,0,1,1,1,1,2,3,3]" << endl;
    vector<int> nums2 = {0,0,1,1,1,1,2,3,3};
    int result2 = solution.removeDuplicates(nums2);
    cout << "Length: " << result2 << ", Array: ";
    printArray(nums2, result2);
    assert(result2 == 7);  // [0,0,1,1,2,3,3]
    cout << "PASSED\n" << endl;
    
    // Test Case 3: No duplicates
    cout << "Test Case 3: [1,2,3,4,5]" << endl;
    vector<int> nums3 = {1,2,3,4,5};
    int result3 = solution.removeDuplicates(nums3);
    cout << "Length: " << result3 << ", Array: ";
    printArray(nums3, result3);
    assert(result3 == 5);
    cout << "PASSED\n" << endl;
    
    // Test Case 4: All same elements (more than 2)
    cout << "Test Case 4: [1,1,1,1,1]" << endl;
    vector<int> nums4 = {1,1,1,1,1};
    int result4 = solution.removeDuplicates(nums4);
    cout << "Length: " << result4 << ", Array: ";
    printArray(nums4, result4);
    assert(result4 == 2);  // [1,1]
    cout << "PASSED\n" << endl;
    
    // Test Case 5: Single element
    cout << "Test Case 5: [1]" << endl;
    vector<int> nums5 = {1};
    int result5 = solution.removeDuplicates(nums5);
    cout << "Length: " << result5 << ", Array: ";
    printArray(nums5, result5);
    assert(result5 == 1);
    cout << "PASSED\n" << endl;
    
    // Test Case 6: Two elements (same)
    cout << "Test Case 6: [1,1]" << endl;
    vector<int> nums6 = {1,1};
    int result6 = solution.removeDuplicates(nums6);
    cout << "Length: " << result6 << ", Array: ";
    printArray(nums6, result6);
    assert(result6 == 2);
    cout << "PASSED\n" << endl;
    
    // Test Case 7: Exactly 2 of each element
    cout << "Test Case 7: [1,1,2,2,3,3]" << endl;
    vector<int> nums7 = {1,1,2,2,3,3};
    int result7 = solution.removeDuplicates(nums7);
    cout << "Length: " << result7 << ", Array: ";
    printArray(nums7, result7);
    assert(result7 == 6);  // No change needed
    cout << "PASSED\n" << endl;
    
    // Test Case 8: Complex case with various duplicates
    cout << "Test Case 8: [1,1,1,2,2,2,3,3,4,4,4,4]" << endl;
    vector<int> nums8 = {1,1,1,2,2,2,3,3,4,4,4,4};
    int result8 = solution.removeDuplicates(nums8);
    cout << "Length: " << result8 << ", Array: ";
    printArray(nums8, result8);
    assert(result8 == 8);  // [1,1,2,2,3,3,4,4]
    cout << "PASSED\n" << endl;
    
    // Test Case 9: Negative numbers
    cout << "Test Case 9: [-2,-2,-2,-1,-1,0,0,0]" << endl;
    vector<int> nums9 = {-2,-2,-2,-1,-1,0,0,0};
    int result9 = solution.removeDuplicates(nums9);
    cout << "Length: " << result9 << ", Array: ";
    printArray(nums9, result9);
    assert(result9 == 6);  // [-2,-2,-1,-1,0,0]
    cout << "PASSED\n" << endl;
    
    // Test Case 10: Mixed pattern
    cout << "Test Case 10: [1,2,2,3,3,3,4,5,5]" << endl;
    vector<int> nums10 = {1,2,2,3,3,3,4,5,5};
    int result10 = solution.removeDuplicates(nums10);
    cout << "Length: " << result10 << ", Array: ";
    printArray(nums10, result10);
    assert(result10 == 8);  // [1,2,2,3,3,4,5,5]
    cout << "PASSED\n" << endl;
    
    cout << "All test cases for Remove Duplicates II PASSED! ✓" << endl;
    return 0;
}