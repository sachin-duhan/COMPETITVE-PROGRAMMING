# Definition for a binary tree node.
import sys
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    ans = -sys.maxsize - 1
    def helper(self, root: TreeNode) -> int:
        if not root:
            return 0
        l = max(0, self.helper(root.left))
        r = max(0, self.helper(root.right))
        self.ans = max(self.ans, root.val + l + r)
        return max(l, r)+root.val

    def maxPathSum(self, root: TreeNode) -> int:
        self.helper(root)
        return self.ans

if __name__ == "__main__":
    vals = [1,2,3]
