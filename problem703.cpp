class KthLargest
{
public:
    priority_queue<int, vector<int>, greater<int>> stream;
    int size;
    KthLargest(int k, vector<int> &nums)
    {
        size = k;
        for (int i = 0; i < nums.size(); i++)
        {
            stream.push(nums[i]);
            if (stream.size() > size)
                stream.pop();
        }
    }

    int add(int val)
    {
        stream.push(val);
        if (stream.size() > size)
            stream.pop();
        return stream.top();
    }
};