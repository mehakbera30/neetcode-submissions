class Solution {
public:
    bool isPalindrome(string s) {
    unordered_map<char,int>m;
     for(int i=0;i<s.length();i++){
        if(m.count(s[i])){
            m[s[i]]--;
        }
        else{
            m[s[i]]++;
        }
     }
     for(auto el:m){
        if(el.second!=0) return false;
     }
     return true;
    }
};
