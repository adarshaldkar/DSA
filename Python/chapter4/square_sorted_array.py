def square_sorted_array(nums):
    pos = []
    neg = []
    n = len(nums)
    
    for i in range(n):
        if nums[i] < 0:
            neg.append(nums[i])
        else:
            pos.append(nums[i])
    
    if len(neg) == 0:
        for j in range(len(pos)):
            pos[j] = pos[j] * pos[j]
        return pos
    
    if len(pos) == 0:
        for i in range(len(neg)):
            neg[i] = neg[i] * neg[i]
        neg.reverse()
        return neg
    
    for i in range(len(neg)):
        neg[i] = neg[i] * neg[i]
    neg.reverse()
    
    for j in range(len(pos)):
        pos[j] = pos[j] * pos[j]
    
    i = 0
    j = 0
    res = []
    
    while i < len(neg) and j < len(pos):
        if neg[i] < pos[j]:
            res.append(neg[i])
            i += 1
        else:
            res.append(pos[j])
            j += 1
    
    while i < len(neg):
        res.append(neg[i])
        i += 1
    
    while j < len(pos):
        res.append(pos[j])
        j += 1
    
    return res


if __name__ == "__main__":
    nums = [-4, -1, 0, 3, 10]
    result = square_sorted_array(nums)
    print(f"Input: {nums}")
    print(f"Output: {result}")


