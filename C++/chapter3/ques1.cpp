#include<stdio.h>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Solution {
public:
    int binaryToDecimal(string b) {
        int decimal = 0;
        int power = 0;
        
        // Process the binary string from right to left
        for (int i = b.length() - 1; i >= 0; i--) {
            if (b[i] == '1') {
                decimal += pow(2, power);
            }
            power++;
        }
        
        return decimal;
    }
};

// Test function
int main() {
    Solution sol;
    
    // Test cases
    cout << "Binary 111 = " << sol.binaryToDecimal("111") << endl;      // Expected: 7
    cout << "Binary 1010 = " << sol.binaryToDecimal("1010") << endl;    // Expected: 10
    cout << "Binary 100001 = " << sol.binaryToDecimal("100001") << endl; // Expected: 33
    
    return 0;
}