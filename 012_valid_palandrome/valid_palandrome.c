class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int i=0,k=0;
while(k<n){
        if(isalnum(s[k])){
           s[i]=tolower(s[k]);
            i++;
            k++;
        }
    else{
        k++;

    }
}
int len= i;
   string newString(len,' ');
  int j=len-1,l=0;

  while (j>=0){
    newString[j]=s[l];
    j--;
    l++;

  }
  int t=0,m=0;
  int count=0;
while(m<len){
    if(newString[t]==s[m]){
        t++;
        m++;
    }
    else{
    return false;
    }}

    return true;
}




        
};