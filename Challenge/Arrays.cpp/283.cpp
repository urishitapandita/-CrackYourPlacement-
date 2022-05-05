#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size(), k=0;
	//Push the non zero elements to the front and keep track of the index using a variable
    for(int i=0; i<n; i++){
        if(nums[i] !=0){
            nums[k] = nums[i];
            k++;
        }
    }
	//Make the remaining elements zero
    for(int i=k; i<n;i++){
        nums[i] =0;
    }
    }
};