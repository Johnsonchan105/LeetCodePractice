class Solution(object):
    def insert(self, intervals, newInterval):
        """
        :type intervals: List[List[int]]
        :type newInterval: List[int]
        :rtype: List[List[int]]
        """
        if len(intervals) == 0:
            return [newInterval]
        if len(newInterval) == 0:
            return intervals
        newArr = []
        i = 0
        stop = False
        while(i < len(intervals)):
            #if intersecting
            if (newInterval[0] <= intervals[i][0] <= newInterval[1] or newInterval[0] <= intervals[i][1] <= newInterval[1] or intervals[i][0] <= newInterval[0] <= intervals[i][1] or intervals[i][0] <= newInterval[1] <= intervals[i][1]) and not stop:
                #combine all values that is affected into 1 array and choose least and greatest
                merge = []
                merge.append(newInterval[0])
                merge.append(newInterval[1])
                while(i < len(intervals) and intervals[i][0] <= newInterval[1]):
                    merge.append(intervals[i][0])
                    merge.append(intervals[i][1])
                    i += 1
                #can be fixed later for better time
                merge.sort()
                newArr.append([merge[0], merge[-1]])
                stop = True
                continue
            newArr.append(intervals[i])
            if intervals[i][1] < newInterval[0] and not stop:
                if i+1 < len(intervals):
                    if(intervals[i+1][0] > newInterval[1]):
                        newArr.append(newInterval)
                        stop = True
                else:
                    newArr.append(newInterval)
                    stop = True
            if intervals[i][0] > newInterval[1] and not stop:
                if i-1 >= 0:
                    if(intervals[i-1][1] < newInterval[0]):
                        newArr.append(newInterval)
                        stop = True
                else:
                    newArr.insert(0, newInterval)
                    stop = True
            i += 1
        return newArr