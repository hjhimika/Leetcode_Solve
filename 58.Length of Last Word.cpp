class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0;
        int l=s.size();
        for(int i= (l-1 );i>=0;i-- ){
            if(s[i]!= ' ')cnt++;
            if(s[i]== ' ' && cnt!= 0)return cnt;
            if(s[i]== ' ')continue;
            
        }
        return cnt;
    }
};
