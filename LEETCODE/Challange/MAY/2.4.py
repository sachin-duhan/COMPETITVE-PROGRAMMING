class Solution:
    def dfs(self, image,i : int,j : int,color : int, fill : int):
        # call recussion!
        if( i < 0 or j < 0 or i >= len(image) or j >= len(image[0]) or image[i][j] != color):
            return
        image[i][j] = fill
        self.dfs(image,i+1,j,color,fill)
        self.dfs(image,i-1,j,color,fill)
        self.dfs(image,i,j+1,color,fill)
        self.dfs(image,i,j-1,color,fill)
        
    def floodFill(self, image: List[List[int]], sr: int, sc: int, newColor: int) -> List[List[int]]:
        if(image[sr][sc] == newColor):
            return image
        self.dfs(image,sr,sc,image[sc][sr], newColor)
        return image