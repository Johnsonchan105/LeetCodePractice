class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        if (t.length() == 1)
            return t.at(0);
        for (int i = 0; i < t.length(); i++)
        {
            bool found = false;
            for (int j = 0; j < s.length(); j++)
            {
                if (t.at(i) == s.at(j))
                {
                    found = true;
                    s.erase(j, 1);
                    break;
                }
            }
            if (!found)
            {
                return t.at(i);
            }
        }
        return t.at(t.length() - 1);
    }
};