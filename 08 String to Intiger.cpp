class Solution {
public:
    int myAtoi(string s) {
        int len=s.size();
        int pos=0,neg=0,i=0;
        double ans=0;
        
        while(s[i]==' '){
            i++;
        }
        if(s[i]=='-'){
            neg++;
            i++;
        }
        if(s[i]=='+'){
            pos++;
            i++;
        }
        
        while(i<len and s[i]>='0' and s[i]<='9'){
            ans= ans*10 + (s[i] - '0');
            i++;
        }
        if(neg>0) ans= ans *(-1);
        if(neg>0 and pos>0) return 0;
        
        if(ans > INT_MAX) ans =INT_MAX;
        if(ans < INT_MIN) ans =INT_MIN;

        return ans;
    }
};
