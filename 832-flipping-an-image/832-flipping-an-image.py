class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        temp=[]
        for i in image:
            i.reverse()
            temp.append(i)
        for i in range(len(image)):
            for j in range (len(image)):
                if image[i][j]==0:
                    temp[i][j]=1
                else:
                    temp[i][j]=0
        return temp
        