class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        for (int i = 0; i < word.size(); i++)
        {
            if (isupper(word[0]))
            {
                if (isupper(word[1]))
                {
                    if (!isupper(word[i]))
                        return false;
                }
                else if (i != 0 && isupper(word[i]))
                    return false;
            }
            else if (isupper(word[i]))
                return false;
        }
        return true;
    }
};