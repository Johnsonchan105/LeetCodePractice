class Solution
{
public:
    int calPoints(vector<string> &ops)
    {
        vector<int> record;
        for (int i = 0; i < ops.size(); i++)
        {
            if (ops[i] == "D")
            {
                record.push_back(record.back() * 2);
            }
            else if (ops[i] == "C")
            {
                record.erase(record.begin() + (record.size() - 1));
            }
            else if (ops[i] == "+")
            {
                record.push_back(record[record.size() - 1] + record[record.size() - 2]);
            }
            else
            {
                record.push_back(stoi(ops[i]));
            }
        }
        int sum = 0;
        for (int i = 0; i < record.size(); i++)
        {
            sum += record[i];
        }
        return sum;
    }
};