class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count[26] = {0};
        for(int i=0;i<t.length();i++){
            int index = t[i]-'a';
            count[index] = count[index]+1;
        }
        for(int i=0;i<s.length();i++){
            int index = s[i]-'a';
            if(count[index]==0) return false;
            count[index] = count[index]-1;
        } 
    return true;
    }
};