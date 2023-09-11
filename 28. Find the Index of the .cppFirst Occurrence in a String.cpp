class Solution {
public:
    int strStr(string haystack, string needle) {
        int flag=-1;
        if ((needle.size()> haystack.size()) ||needle.size()==0 || haystack.size()==0 ) return flag;

        for(int i=0;i< haystack.size();i++){
            if(haystack[i]== needle[0]){
                flag=i;
                for(int j=0;j< needle.size(); j++){
                    if(needle[j] != haystack[i+j] || haystack.size()-i<j) {
                        //cout<< needle[j] << haystack[i+j];
                        flag= -1;
                        break;
                    }
                //cout << flag <<endl;

                }
                if(flag> -1) return flag;
            }

        }
        return -1;
        
    }
};
