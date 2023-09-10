class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = int (s.length());
        int res =0;
        unordered_map<char, int> ump;
        
        for (int i=0, j=0; j<n; j++){
            if(ump[s[j]] > 0 ) i = max(ump[s[j]],i);
            res = max(res, (j-i+1) );
            ump[s[j]]= j+1 ;
            
        }
        return res;
        
        
    }
};
