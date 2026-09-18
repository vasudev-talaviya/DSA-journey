// leetcode question no 11

#include<iostream>
#include<vector>
using namespace std;


class Solution
{
    public:

    int MaxArea(vector<int>& height)
    {
        int maxWater = 0;
        int lp = 0;
        int rp = height.size() - 1;

        while(lp < rp)
        {

            int w = rp - lp;
            int ht = min(height[lp] , height[rp]);
            int currwater = w * ht;

            maxWater = max(maxWater , currwater);

            cout << "left postion:-" << lp <<endl;
            cout << "Right postion:-" << rp << endl;
            cout << "Cuurentwater store:-" << currwater << endl;

            height[lp] < height[rp] ?  lp++ : rp--;

            cout << "Width:-" << w << endl;
            cout << "Height:-" << ht << endl;

            cout << endl;

        }

        return maxWater;
    };
};


int main()
{
    Solution s;

    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout << s.MaxArea(height);

    return 0;
};