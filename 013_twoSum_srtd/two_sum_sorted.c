class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    int n= numbers.size();
    int i=0,j=n-1;
    int result;
    while(i<j){
        result=numbers[i]+numbers[j];
        if(result>target){
            j--;
        }
        else if(result<target){
            i++;
        }
    else{
        return{i+1,j+1};
    }
    }
    return{};
    }
};