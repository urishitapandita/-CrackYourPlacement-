#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int merge(vector<int> &nums, int low, int mid, int high)
    {

        int i = low, j = mid + 1;
        int cnt = 0;
        while (i <= mid and j <= high)
        {
            if ((long)nums[i] > (long)2 * nums[j])
            {
                cnt += (mid + 1 - i);
                j++;
            }
            else
            {
                i++;
            }
        }
        sort(nums.begin() + low, nums.begin() + high + 1);
        return cnt;
    }
    int mergesort(vector<int> &nums, int low, int high)
    {
        int res = 0;
        if (low < high)
        {
            int mid = (low + high) / 2;
            res += mergesort(nums, low, mid);
            res += mergesort(nums, mid + 1, high);
            res += merge(nums, low, mid, high);
        }
        return res;
    }
    int reversePairs(vector<int> &nums)
    {
        return mergesort(nums, 0, nums.size() - 1);
    }
};