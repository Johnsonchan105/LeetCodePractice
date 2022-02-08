class Solution
{
public:
    int addDigits(int num)
    {
        int dig = 0;
        while (num > 0)
        {
            dig += num % 10;
            num /= 10;
        }
        if (dig / 10 == 0)
            return dig;
        return addDigits(dig);
    }
};