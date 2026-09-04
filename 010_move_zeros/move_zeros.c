class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,k=0,j;
        int n= nums.size();
        while(k<n){
        if(nums[k]==0){
            k++;
        }
        else{
            nums[i]=nums[k];
            i++;
            k++;
        }
        }
        for(j=i;j<n;j++){
            nums[j]=0;
        }
    }
};