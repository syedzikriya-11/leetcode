class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int max=0,i,j;
       

        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                unsigned int width=j-i;
                int min_height = min(height[i],height[j]);
                int result=width*min_height;
                
                if(result>max){
                    max=result;
                    }

                }
            }
return max;


        }

    
};