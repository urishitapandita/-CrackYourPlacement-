#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 1) return 0;
        
        int size = prices.size();
        int max_profit = INT_MIN;
        int localMax = prices[size - 1];
        
        for (int i = size - 2; i >= 0; i--)
        {
            int diff = localMax - prices[i];
            
            if (diff > max_profit) max_profit = diff;
            if (prices[i] > localMax) localMax = prices[i];
        }
        
        return max_profit > 0 ? max_profit : 0;
    }
};