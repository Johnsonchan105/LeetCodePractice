class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int plantable = 0;
        if (flowerbed.size() == 1)
        {
            if (flowerbed[0] == 0)
                plantable++;
            return plantable >= n;
        }
        if (flowerbed[0] == 0 && flowerbed[1] == 0)
        {
            flowerbed[0] = 1;
            plantable++;
        }
        for (int i = 1; i < flowerbed.size() - 1; i++)
        {
            if (flowerbed[i] == 0 && flowerbed[i - 1] != 1 && flowerbed[i + 1] != 1)
            {
                flowerbed[i] = 1;
                plantable++;
            }
            if (plantable >= n)
                return true;
        }
        if (flowerbed[flowerbed.size() - 1] == 0 && flowerbed[flowerbed.size() - 2] == 0)
            plantable++;
        return plantable >= n;
    }
};