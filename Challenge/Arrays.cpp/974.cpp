#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        int sum=0,ans=0;
        map<int,int>mp;
        for(int i=0;i<A.size();i++)
        {   sum+=A[i];
            int r=((sum%K)+K)%K;
            mp[r]++;
        }
        for(auto i:mp)
        {   if(i.first==0)
            {   ans+=(i.second*(i.second-1))/2;
                ans+=i.second;
            }
         else
            ans+=(i.second*(i.second-1))/2;
        }
        return ans;
    }
};