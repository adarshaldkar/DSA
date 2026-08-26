def removeDuplicates(nums):
    """
    Remove duplicates from sorted array in-place
    Returns the number of unique elements
    """
    if not nums:
        return 0
    
    a = 0       # Write position
    unique = 1  # Count of unique elements (first element always unique)
    count = 1   # Read position (start from index 1)
    n = len(nums)
    
    while count < n:
        # If current element is same as previous, skip it
        if count > 0 and nums[count] == nums[count-1]:
            count += 1
            continue
        
        # Found a unique element, place it at write position
        a += 1
        nums[a] = nums[count]
        unique += 1
        count += 1
    
    return unique

# Test the function
nums = [0,0,1,1,1,2,2,3,3,4]
print(f"Original array: {nums}")

unique_count = removeDuplicates(nums)

print(f"Array after removing duplicates: {nums[:unique_count]} + {['_'] * (len(nums) - unique_count)}")
print(f"Number of unique elements: {unique_count}")

# Alternative: More Pythonic solutions
def removeDuplicates_pythonic1(nums):
    """Using set to remove duplicates (but loses order)"""
    return len(set(nums))

def removeDuplicates_pythonic2(nums):
    """Using list comprehension with enumerate"""
    if not nums:
        return 0
    
    write_pos = 1
    for i in range(1, len(nums)):
        if nums[i] != nums[i-1]:
            nums[write_pos] = nums[i]
            write_pos += 1
    
    return write_pos

def removeDuplicates_pythonic3(nums):
    """Using two pointers - most readable"""
    if not nums:
        return 0
    
    slow = 0
    for fast in range(1, len(nums)):
        if nums[fast] != nums[slow]:
            slow += 1
            nums[slow] = nums[fast]
    
    return slow + 1

# Test all methods
print("\n=== Different Python Solutions ===")
test_nums = [0,0,1,1,1,2,2,3,3,4]

# Method 1 (Your approach - fixed)
nums1 = test_nums.copy()
result1 = removeDuplicates(nums1)
print(f"Method 1 (Your approach): {result1} unique elements")

# Method 2 (List comprehension)
nums2 = test_nums.copy()
result2 = removeDuplicates_pythonic2(nums2)
print(f"Method 2 (List comprehension): {result2} unique elements")

# Method 3 (Two pointers)
nums3 = test_nums.copy()
result3 = removeDuplicates_pythonic3(nums3)
print(f"Method 3 (Two pointers): {result3} unique elements")


# class Solution:
#     def removeDuplicates(self, nums: List[int]) -> int:
#         a=0
#         unique=1
#         cm=1
#         n=len(nums)

#         while(cm<n):
#             if(nums[cm] != nums[cm-1]):
#                 a+=1
#                 nums[a]=nums[cm]
#                 unique+=1
#             cm+=1
#         return unique
        
#alternative methord