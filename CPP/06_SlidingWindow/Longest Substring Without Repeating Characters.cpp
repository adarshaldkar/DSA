#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int low = 0;
        int res = 0;

        unordered_map<char, int> f;

        for (int high = 0; high < s.size(); high++) {
            

            f[s[high]]++;


            while (f[s[high]] > 1) {
                
                f[s[low]]--;

                if (f[s[low]] == 0) {
                    f.erase(s[low]);
                }

                low++;
            }

            int len = high - low + 1;

            res = max(res, len);
        }

        return res;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;

    // Example 1: s = "abcabcbb" -> Expected: 3 ("abc")
    string s1 = "abcabcbb";
    cout << "Example 1 Output: " << sol.lengthOfLongestSubstring(s1) << " (Expected: 3)\n";

    // Example 2: s = "bbbbb" -> Expected: 1 ("b")
    string s2 = "bbbbb";
    cout << "Example 2 Output: " << sol.lengthOfLongestSubstring(s2) << " (Expected: 1)\n";

    // Example 3: s = "pwwkew" -> Expected: 3 ("wke")
    string s3 = "pwwkew";
    cout << "Example 3 Output: " << sol.lengthOfLongestSubstring(s3) << " (Expected: 3)\n";

    // Example 4: s = "" -> Expected: 0
    string s4 = "";
    cout << "Example 4 Output: " << sol.lengthOfLongestSubstring(s4) << " (Expected: 0)\n";

    // Example 5: s = " " -> Expected: 1
    string s5 = " ";
    cout << "Example 5 Output: " << sol.lengthOfLongestSubstring(s5) << " (Expected: 1)\n";

    return 0;
}
