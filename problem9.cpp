class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        auto s = std::to_string(x);
        if (s.length() == 1)
        {
            return true;
        }
        while (s.length() > 0)
        {
            if (s.length() == 3 && s.at(0) == s.at(2))
            {
                return true;
            }
            else if (s.length() == 3 && s.at(0) != s.at(2))
            {
                return false;
            }
            if (s.at(0) != s.at(s.length() - 1))
            {
                return false;
            }
            s = s.substr(1, s.length() - 2);
            std::cout << s << " ";
        }
        return true;
    }
};