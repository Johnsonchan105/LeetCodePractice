class MyQueue(object):
    #stackRest = []
    #stackTop = []

    def __init__(self):
        self.stackTop = []
        self.stackRest = []

    def push(self, x):
        """
        :type x: int
        :rtype: None
        """
        if(len(self.stackTop) == 0):
           self.stackTop.append(x)
        else:
            while len(self.stackRest) != 0:
                self.stackTop.append(self.stackRest.pop())
            self.stackRest.append(x)
            while len(self.stackTop) != 1:
                self.stackRest.append(self.stackTop.pop())

    def pop(self):
        """
        :rtype: int
        """
        p = self.stackTop.pop()
        if(len(self.stackRest) != 0):
            self.stackTop.append(self.stackRest.pop())
        return p
        

    def peek(self):
        """
        :rtype: int
        """
        if(len(self.stackTop) != 0):
            return self.stackTop[-1]
        return -1
        

    def empty(self):
        """
        :rtype: bool
        """
        return len(self.stackTop) == 0
        

