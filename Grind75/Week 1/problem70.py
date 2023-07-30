class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        if(n == 1):
            return 1
        if(n == 2):
            return 2
        fib0 = 1
        fib1 = 0
        ways = 2
        for i in range(3,n+1):
            temp = fib0 + fib1
            ways += temp
            fib1 = fib0
            fib0 = temp
        return ways