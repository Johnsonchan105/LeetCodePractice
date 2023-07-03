class Solution(object):
    def recurse(self, image, sr, sc, color, con):
        if sr < 0 or sr >= len(image) or sc < 0 or sc >= len(image[0]):
            return
        if image[sr][sc] == color or image[sr][sc]!= con:
            return
        image[sr][sc] = color
        self.recurse(image,sr+1,sc, color, con)
        self.recurse(image,sr-1,sc, color, con)
        self.recurse(image,sr,sc+1, color, con)
        self.recurse(image,sr,sc-1, color, con)
        
    def floodFill(self, image, sr, sc, color):
        """
        :type image: List[List[int]]
        :type sr: int
        :type sc: int
        :type color: int
        :rtype: List[List[int]]
        """
        self.recurse(image, sr, sc, color, image[sr][sc])
        return image