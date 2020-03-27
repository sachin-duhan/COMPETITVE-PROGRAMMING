def test(n):
    count = 0
    for i in range(n):
        for j in range(n):
            if i < j and (i+j) % 2 == 0:
                count += 1

    return count


def solve(s):
    toDelete = s[0]
    others = ""
    for c in s:
        if c != toDelete:
            others += c
    s = others

    # prefix of length 1 surely doesn't contain different letters
    prefix = s[0]
    for i in range(1, len(s)):
        # each letter should be the same as the first
        if s[i] == prefix[0]:
            prefix += s[i]
        else:
            break
    return prefix


def caculate(a):
    result = 0
    s = 0
    for y in a:
            s += y
    for x in a:
        result += s*x
    return result


abc = [1, 2, 3]
print(caculate(abc))
