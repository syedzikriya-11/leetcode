#include <climits>
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
       int res=INT_MAX;
       int sum=0;
       int len=0;
       int high=0,low=0;

       while(high<n){
        sum+=nums[high];
        while(sum>=target){
            len=high-low+1;
            res=min(res,len);
            sum-=nums[low];
            low++;

        }
high++;

       }

if (res==INT_MAX){
    return 0;
}
else{
    return res;
}
    }
    
};