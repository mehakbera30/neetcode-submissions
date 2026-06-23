class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0,j=0,ans;
        while(i<s.length() && j<t.length()){
            if(s[i]==t[j]) {
                j++;
            }
            i++;
            ans = t.length()-j;
            
        }
        return ans;
    }
};