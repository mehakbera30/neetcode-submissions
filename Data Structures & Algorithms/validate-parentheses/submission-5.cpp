class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
       for(char ch:s){
        if(ch=='{' || ch=='[' || ch=='('){
            st.push(ch);
        }
        else{
            if(st.empty()) return false;  
            int top = st.top();
            if(ch=='}' && top!='{') return false;
            if(ch==')' && top!='(') return false;
            if(ch==']' && top!='[') return false;
            st.pop();
        }
       }
       if (!st.empty()) return false;
       return true;
      
    }
};
