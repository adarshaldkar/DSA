class Solution:
    def maxSubarraySum(self, arr, k):
        
        n = len(arr)
    
        low = 0
        high = k - 1
        total = 0
        res = 0
    
        # Calculate sum of first window
        for i in range(k):
            total += arr[i]
    
        res = total
    
        # Slide the window
        while high < n - 1:
            low += 1
            high += 1
    
            total = total - arr[low - 1]
            total = total + arr[high]
    
            res = max(res, total)
    
        return res


if __name__ == "__main__":
    sol = Solution()

    # Example 1
    arr1 = [100, 200, 300, 400]
    k1 = 2
    print(f"Example 1 Output: {sol.maxSubarraySum(arr1, k1)} (Expected: 700)")

    # Example 2
    arr2 = [1, 4, 2, 10, 23, 3, 1, 0, 20]
    k2 = 4
    print(f"Example 2 Output: {sol.maxSubarraySum(arr2, k2)} (Expected: 39)")

    # Example 3
    arr3 = [100, 200, 300, 400]
    k3 = 1
    print(f"Example 3 Output: {sol.maxSubarraySum(arr3, k3)} (Expected: 400)")