# Input: nums = [2,7,11,15], target = 9
# Output: [0,1]
# Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

nums = [2,7,11,15]
target = 9

# SOLUTION 1: Brute Force (Your Current Solution)
def twoSum1(nums, target):
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if nums[i] + nums[j] == target:
                return [i, j]
    return []

# SOLUTION 2: Hash Map (Dictionary) - O(n) Time
def twoSum2(nums, target):
    seen = {}  # Dictionary to store {value: index}
    
    for i, num in enumerate(nums):
        complement = target - num
        if complement in seen:
            return [seen[complement], i]
        seen[num] = i
    return []

# SOLUTION 3: Two Pointers (Only works with sorted array)
def twoSum3(nums, target):
    # Create list of (value, original_index) pairs
    indexed_nums = [(nums[i], i) for i in range(len(nums))]
    indexed_nums.sort()  # Sort by value
    
    left, right = 0, len(nums) - 1
    
    while left < right:
        current_sum = indexed_nums[left][0] + indexed_nums[right][0]
        if current_sum == target:
            return sorted([indexed_nums[left][1], indexed_nums[right][1]])
        elif current_sum < target:
            left += 1
        else:
            right -= 1
    return []

# SOLUTION 4: Using enumerate and list comprehension (Pythonic)
def twoSum4(nums, target):
    for i, num1 in enumerate(nums):
        for j, num2 in enumerate(nums[i+1:], i+1):
            if num1 + num2 == target:
                return [i, j]
    return []

# SOLUTION 5: Set-based approach (Two pass)
def twoSum5(nums, target):
    num_set = set(nums)
    for i, num in enumerate(nums):
        complement = target - num
        if complement in num_set and complement != num:
            # Find complement's index
            for j in range(i+1, len(nums)):
                if nums[j] == complement:
                    return [i, j]
    return []

# SOLUTION 6: Using zip and range
def twoSum6(nums, target):
    for i, (idx1, val1) in enumerate(zip(range(len(nums)), nums)):
        for idx2, val2 in zip(range(i+1, len(nums)), nums[i+1:]):
            if val1 + val2 == target:
                return [idx1, idx2]
    return []

# Test all solutions
print("=== Two Sum Solutions Comparison ===")
print(f"Input: nums = {nums}, target = {target}")
print()

print("Solution 1 (Brute Force):", twoSum1(nums, target))
print("Solution 2 (Hash Map):", twoSum2(nums, target))
print("Solution 3 (Two Pointers):", twoSum3(nums, target))
print("Solution 4 (Enumerate):", twoSum4(nums, target))
print("Solution 5 (Set-based):", twoSum5(nums, target))
print("Solution 6 (Zip):", twoSum6(nums, target))
    