/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i,j;
   
    for(i=0;i<numsSize;i++){
        for(j=0;j<numsSize;j++){
             if(i==j){
                continue;
               }  
                if(nums[i]+nums[j]==target){
                   *returnSize = 2;

        int *ans = malloc(2 * sizeof(int));

        ans[0] = i;
        ans[1] = j;

        return ans; 

              }

            }
    }
    
*returnSize = 0;
return NULL;


}
    

    



