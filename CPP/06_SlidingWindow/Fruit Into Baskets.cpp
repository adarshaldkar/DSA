#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low = 0;
        int high=0;
        int n=fruits.size();
        unordered_map<int,int>f;
        int res=-1;

        for(high=0;high<n;high++){
            f[fruits[high]]++;
            while(f.size()>2){
                f[fruits[low]]--;
                if(f[fruits[low]]==0)
                f.erase(fruits[low]);
                low++;
            }
            res=max(res,high-low+1);
        }
        return res;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;

    // Example 1: fruits = [1,2,1] -> Expected: 3
    vector<int> fruits1 = {1, 2, 1};
    cout << "Example 1 Output: " << sol.totalFruit(fruits1) << " (Expected: 3)\n";

    // Example 2: fruits = [0,1,2,2] -> Expected: 3 ("1,2,2")
    vector<int> fruits2 = {0, 1, 2, 2};
    cout << "Example 2 Output: " << sol.totalFruit(fruits2) << " (Expected: 3)\n";

    // Example 3: fruits = [1,2,3,2,2] -> Expected: 4 ("2,3,2,2")
    vector<int> fruits3 = {1, 2, 3, 2, 2};
    cout << "Example 3 Output: " << sol.totalFruit(fruits3) << " (Expected: 4)\n";

    // Example 4: fruits = [3,3,3,1,2,1,1,2,3,3,4] -> Expected: 5 ("1,2,1,1,2")
    vector<int> fruits4 = {3,3,3,1,2,1,1,2,3,3,4};
    cout << "Example 4 Output: " << sol.totalFruit(fruits4) << " (Expected: 5)\n";

    // Example 5: fruits = [0,0,1,1] -> Expected: 4
    vector<int> fruits5 = {0,0,1,1};
    cout << "Example 5 Output: " << sol.totalFruit(fruits5) << " (Expected: 4)\n";

    return 0;
}