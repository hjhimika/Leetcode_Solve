class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        l = len(strs)
        if l == 0:
            return ""
        if l == 1:
            return strs[0]
        str_len = len(strs[0])
        for i in range(1, l):
            str_len = min (str_len, len(strs[i]))
            #print(str_len)
            while (str_len > 0) and (strs[0][0:str_len] != strs[i][0:str_len]) :
                #print(str_len)
                str_len = str_len -1
                #print(str_len)
                if str_len == 0 :
                    return ""
        return strs[0][0:str_len]
        
