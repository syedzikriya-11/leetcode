/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include <math.h>
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int *a=malloc((numsSize) * sizeof(int));//pos
    int *b=malloc((numsSize) * sizeof(int));//neg
    
    int *res=malloc((numsSize) * sizeof(int));
    *returnSize = numsSize;

    int i,asize=0,bsize=0;
    for(i=0;i<numsSize;i++){
        if(nums[i]>=0){
            a[asize]=nums[i];
            asize++;
        }

        else{
            b[bsize]=nums[i];
            bsize++;
        }


    }
    int z=0;
        if(asize==0){
            while(z<numsSize){
                res[z]=pow(nums[z],2);
                z++;
                 
            }
             for(i=0;i<numsSize/2;i++){
                    int temp=res[i];
                    res[i]=res[numsSize-1-i];
                    res[numsSize-1-i]=temp;

            }


        }
        

        else if(bsize==0){
            while(z<numsSize){
                res[z]=pow(nums[z],2);
                z++;
                }
              
        }


    else{
        for(i=0;i<asize;i++){
            a[i]=pow(a[i],2);


        }
        for(i=0;i<bsize;i++){
            b[i]=pow(b[i],2);


        }
        for(i=0;i<bsize/2;i++){
                    int temp=b[i];
                    b[i]=b[bsize-1-i];
                    b[bsize-1-i]=temp;
            }

int x=0,y=0;
int id=0;
        while(x<asize && y<bsize){
            if(a[x]<=b[y]){
                    res[id]=a[x];
                    id++;
                    x++;

            }

        else{
            res[id]=b[y];
            id++;
            y++;
        }


    }
    while (x < asize) {
    res[id++] = a[x++];
}

while (y < bsize) {
    res[id++] = b[y++];
}}
    return res;

}