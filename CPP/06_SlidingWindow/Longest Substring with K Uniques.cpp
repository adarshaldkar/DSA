#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestKSubstr(string &s, int k) {
        int low = 0;
        int high = 0;
        int res = -1;
        int n = s.size();
        unordered_map<char, int> f;

        for (high = 0; high < n; high++) {
            f[s[high]]++;

            while (f.size() > k) {
                f[s[low]]--;
                if (f[s[low]] == 0)
                    f.erase(s[low]);
                low++;
            }
            if (f.size() == k) {
                res = max(res, high - low + 1);
            }
        }
        return res;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;

    // Example 1: s = "aabacbebebe", k = 3 -> Expected: 7 ("cbebebe")
    string s1 = "aabacbebebe";
    int k1 = 3;
    cout << "Example 1 Output: " << sol.longestKSubstr(s1, k1) << " (Expected: 7)\n";

    // Example 2: s = "aaaa", k = 2 -> Expected: -1 (only 1 unique character)
    string s2 = "aaaa";
    int k2 = 2;
    cout << "Example 2 Output: " << sol.longestKSubstr(s2, k2) << " (Expected: -1)\n";

    // Example 3: s = "aabacbebebe", k = 2 -> Expected: 6 ("ebebeb")
    string s3 = "aabacbebebe";
    int k3 = 2;
    cout << "Example 3 Output: " << sol.longestKSubstr(s3, k3) << " (Expected: 6)\n";

    return 0;
}