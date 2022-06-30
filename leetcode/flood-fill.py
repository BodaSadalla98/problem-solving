class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        
        dx = [-1,1,0,0]
        dy = [0,0,1,-1]
        q = []
        pixels = []
        q.append( [sr,sc])
        vis = [ [0] * len(image[0]) for i  in range(len(image))]
        
        def valid(x,y):
            return x > -1 and x < len(image) and y > -1 and y < len(image[0]) and not vis[x][y] and image[x][y] == image[sr][sc]
        
        while q:
            
            x,y = q.pop()
            vis[x][y] = 1
            pixels.append([x,y])
            for i in range(4):
                new_x = x + dx[i]
                new_y = y + dy[i]
                
                if valid(new_x,new_y):
                    q.append([new_x,new_y])
                    
        
        for pixel in pixels:
            x,y = pixel
            
            image[x][y] = color
        
        return image
            
            
        