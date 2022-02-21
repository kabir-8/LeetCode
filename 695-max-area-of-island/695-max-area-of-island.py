class Solution:
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        def che(i,j):
            global s
            if grid[i][j]==1:
                grid[i][j]=0
                s+=1
                k=j
                if k+1<len(grid[0]):
                    che(i,k+1)
                k=j
                if k-1>=0:
                    che(i,k-1)
                k=i
                if k+1<len(grid):
                    che(k+1,j)
                k=i
                if k-1>=0:
                    che(k-1,j)
            return
        max=0
        global s
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                s=0
                if grid[i][j]==1:
                    che(i,j)
                    if s>max:
                        max=s
        return max