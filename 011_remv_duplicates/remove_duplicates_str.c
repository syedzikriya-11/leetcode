class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n= nums.size();
        int k=1,i=0;
        while(k<n){
            if(nums[k]==nums[i]){
                k++;
            }
    else{
        i++;
        nums[i]=nums[k];
        k++;
    }
        }
return i+1;
       }
};