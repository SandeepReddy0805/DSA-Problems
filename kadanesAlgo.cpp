#include<bits/stdc++.h>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int sum = nums[0];
        int maxSum = nums[0];
        for(int i =1;i<nums.size();++i){
             if(sum<0){
                sum = 0;
            }
            sum = sum + nums[i];
            if(sum>maxSum)
                    maxSum = sum;
        }
        return maxSum;
    }
};