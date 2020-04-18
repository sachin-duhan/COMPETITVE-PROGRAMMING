class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def increasingBST(self, root: TreeNode) -> TreeNode:
        def inorder(self,root):
            if root:
                inorder(self,root.left)
                root.left = None
                self.curr.right = root
                self.curr = root
                inorder(self,root.right)
                
        ans =  self.curr = TreeNode(0)
        inorder(self,root)
        return ans.right