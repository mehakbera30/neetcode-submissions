class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char,int>m;
       for(int i=0;i<s.length();i++){
         m[s[i]]++;
       }
       for(auto al:m){
        if(m.count(al.first)) return true;
       }
       return false;
    }
};
