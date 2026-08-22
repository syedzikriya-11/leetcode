void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
        
        int *res = malloc((m + n) * sizeof(int));
        int i=0,j=0;
        
        int id=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                    res[id]=nums1[i];
                    id++;
                    i++;

            }

        else{
            res[id]=nums2[j];
            id++;
            j++;
        }

        }
        while(j<n){
            res[id]=nums2[j];
            id++;
            j++;

}
while(i<m){
 res[id]=nums1[i];
            id++;
            i++;

}

   for (int k = 0; k < m + n; k++) {
        nums1[k] = res[k];
    }
}