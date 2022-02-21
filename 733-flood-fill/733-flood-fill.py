class Solution(object):
    def floodFill(self, image, sr, sc, newColor):
        que = list()
        idx = (sr,sc)
        que.append((sr,sc))
        oldColor = image[sr][sc]
        if(oldColor==newColor):
            return image
        while(len(que)!=0):
            idx = que.pop(0)
            
            image[idx[0]][idx[1]] = newColor
            if(idx[0]+1<len(image) and image[idx[0]+1][idx[1]] == oldColor):
                que.append((idx[0]+1,idx[1]))
                
            if(0<=idx[0]-1 and image[idx[0]-1][idx[1]] == oldColor):
                que.append((idx[0]-1,idx[1]))
                
            if(0<=idx[1]-1 and image[idx[0]][idx[1]-1] == oldColor):
                que.append((idx[0],idx[1]-1))
                
            if(idx[1]+1<len(image[0]) and image[idx[0]][idx[1]+1] == oldColor):
                que.append((idx[0],idx[1]+1))
                
        return image
            