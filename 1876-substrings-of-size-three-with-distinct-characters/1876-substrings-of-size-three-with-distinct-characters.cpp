class Solution {
public:
    int countGoodSubstrings(string s) {
        set<char> st;
        int count=0;
        int m=0;
            if(s[m] != s[m+1] && s[m] != s[m+2] && s[m+1] != s[m+2]) count++;
        
        
        int i=1;
        int j=3;
        while(j<s.size()){
            if(s[i] != s[i+1] && s[i] != s[i+2] && s[i+1] != s[i+2]) count++;
           
            i++;
            j++;
        }
        return count;
        
    }
};