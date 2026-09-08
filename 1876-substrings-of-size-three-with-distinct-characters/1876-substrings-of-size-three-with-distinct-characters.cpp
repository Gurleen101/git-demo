class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.size()<3) return 0;
        vector<int> freq(26,0);
        int distinct=0;
        int count=0;
        for(int i=0;i<3;i++){
          
            if(freq[s[i]-'a']==0) 
            distinct++;
            freq[s[i]-'a']++;
        }
        if(distinct==3)count++;
        int i=0;
        int j=3;
        while(j<s.size()){
            freq[s[i]-'a']--;
            
            if(freq[s[i]-'a']==0) distinct--;

            freq[s[j]-'a']++;
            if(freq[s[j]-'a']==1)distinct++;
            if(distinct==3) count++;
            i++;
            j++;

        }
         return count;
    }
};