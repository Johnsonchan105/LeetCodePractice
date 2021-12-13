class Solution
{
public:
    int maxPower(string s)
    {
        int maxWords = 0;
        int tempMax = 0;
        int tempChar = s[0];
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != tempChar)
            {
                tempChar = s[i];
                maxWords = max(tempMax, maxWords);
                tempMax = 1;
            }
            else
            {
                tempMax++;
            }
        }
        maxWords = max(tempMax, maxWords);
        return maxWords;
    }
};