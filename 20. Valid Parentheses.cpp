class Solution {
public:
    bool isValid(string s) {
        if(s[0]==')' || s[0]== '}' || s[0]== ']') return false;
        
        stack<char> stk;
        for(int i=0; i< s.size(); i++){
            if(s[i]=='(' || s[i]== '{' || s[i]== '[') stk.push(s[i]);
            if( !stk.empty() && (stk.top()== '(' && s[i]== ')') || (stk.top()== '{' && s[i]== '}') || (stk.top()== '[' && s[i]== ']')){
                    stk.pop();
                }
                
            
            
        }
     

        if(stk.empty() ) return true;
        else return false;
    }
};
