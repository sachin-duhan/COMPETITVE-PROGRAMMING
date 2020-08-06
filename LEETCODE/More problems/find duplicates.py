def findDuplicates(nums):
    freq = [0 for _ in nums]
    for i in nums:
        freq[i-1]+=1
    freq = [i+1 if i > 1 else 0 for i in freq]
    return freq

input = [4,3,2,7,8,2,3,1]
vals = findDuplicates(input)
for i in vals:
    print(i)
