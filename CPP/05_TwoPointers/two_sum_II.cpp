
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {
		int l = 0, r = (int)numbers.size() - 1;
		while (l < r) {
			int s = numbers[l] + numbers[r];
			if (s == target) return {l + 1, r + 1}; 
			if (s < target) ++l;
			else --r;
		}
		return {};



// int n = (int)numbers.size();
// 		for (int i = 0; i < n; ++i) {
// 			for (int j = i + 1; j < n; ++j) {
// 				if (numbers[i] + numbers[j] == target) {
// 					return {i + 1, j + 1}; 
// 				}
// 			}
// 		}
// 		return {};







	}
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// Example usage - change values to test other cases
	vector<int> numbers = {2, 7, 11, 15};
	int target = 9;

	Solution sol;
	auto ans = sol.twoSum(numbers, target);
	if (ans.empty()) {
		cout << "No solution\n";
	} else {
		cout << ans[0] << " " << ans[1] << '\n';
	}

	return 0;
}

