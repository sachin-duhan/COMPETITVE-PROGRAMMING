def solve(arr):
    n = len(arr)
    if(n % 2 != 0):
        return -1
    totalSum = sum(arr)
    if(sum % 2 != 0):
        return -1
    arr.sort()
    for i in range(n):
        pass
arr = [1, 2, 3, 4]
print(solve(arr))
