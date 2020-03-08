n = int(input())
A = [0] * (n + 1)
for i, x in enumerate(map(int, input().split())):
    r1 = max(-1, i - x) + 1
    r2 = min(max(i, i - x + n) + 1, n)
    A[0] += 1
    A[r1] -= 1
    A[i + 1] += 1
    A[r2] -= 1
for i in range(n):
    A[i + 1] += A[i]
print(A.index(max(A)) + 1)
