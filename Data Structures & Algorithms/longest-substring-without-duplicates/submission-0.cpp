class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int left = 0;
        unordered_set<char>mp;
        int maxlength = 0;
        for(int i=0;i<n;i++){
            if(mp.count(s[i])==0) {
                mp.insert(s[i]);
            maxlength=max(maxlength,i-left+1);
            } 
            else{
                while(mp.count(s[i])){
                    mp.erase(s[left]);
                    left++;
                }
            mp.insert(s[i]);
            }
        }
        return maxlength;
    }
};
