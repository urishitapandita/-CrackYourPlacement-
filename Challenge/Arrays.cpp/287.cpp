#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {

        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[nums[i] % n - 1] > n)
                return nums[i] % n;
            nums[nums[i] % n - 1] += n;
        }
        return -1;
    }
};