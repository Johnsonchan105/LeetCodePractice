class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string prefix = "";
        if (strs.size() == 1 || strs[0] == "")
        {
            return strs[0];
        }
        int counter = 0;
        bool eq = false;
        while (!eq)
        {
            std::cout << counter;
            char temp = strs[0].at(counter);
            for (int i = 0; i < strs.size(); i++)
            {
                if (counter >= strs[i].size() || strs[i].at(counter) != temp)
                    eq = true;
            }
            if (eq)
                break;
            prefix += temp;
            if (counter >= strs[0].size() - 1)
                break;
            counter++;
            eq = false;
        }
        return prefix;
    }
};