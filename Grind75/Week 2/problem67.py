class Solution(object):
    def addBinary(self, a, b):
        a = a[::-1]
        b = b[::-1]
        conv = {
            3:["1","1"],
            2:["0","1"],
            1:["1","0"],
            0:["0","0"]
        }
        nVal = ""
        l, s = a,b 
        if(len(a) < len(b)):
            l,s = b,a
        carry = "0"
        for i in range(0,len(l)):
            numO = 0
            if(l[i] == "1"):
                numO += 1 
            if(carry == "1"):
                numO += 1 
            if(i < len(s)):
                if(s[i] == "1"):
                    numO += 1 
            nVal += conv[numO][0]
            carry = conv[numO][1]
        if(carry == "1"):
            nVal += "1"
        return nVal[::-1]