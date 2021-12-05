class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        string xstr = std::bitset<32>(x).to_string();
        string ystr = std::bitset<32>(y).to_string();
        int diff = 0;
        for (int i = 0; i < 32; i++)
        {
            if (xstr[i] != ystr[i])
            {
                diff++;
            }
        }
        return diff;
    }
};