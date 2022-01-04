class Solution
{
public:
    int findJudge(int n, vector<vector<int>> &trust)
    {
        if (trust.size() == 0)
            return (n == 1) ? 1 : -1;
        vector<int> count(n + 1);
        for (int i = 0; i < trust.size(); i++)
        {
            count[trust[i][0]]--;
            count[trust[i][1]]++;
        }
        for (int j = 0; j < count.size(); j++)
        {
            if (count[j] == (n - 1))
            {
                return j;
            }
        }
        return -1;
    }
};