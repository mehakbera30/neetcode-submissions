class Solution {
public:
    int scoreOfString(string s) {
       int n = s.length();
       int ans=0;
       for(int i=0;i<n-1;i++){
        int value = abs(s[i] - s[i+1]);
        ans = ans + value;
       }
      return ans;
        
    }
};