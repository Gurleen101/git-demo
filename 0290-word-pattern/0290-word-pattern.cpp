class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> mpp;
        stringstream ss(s);
        vector<string> words;
        string word;

       while(ss >> word) {
          words.push_back(word);
       }
       if(pattern.size() != words.size()) return false;
        for(int i=0;i<pattern.size();i++){
            if(mpp.find(pattern[i])!=mpp.end()){
                if(mpp[pattern[i]] != words[i]) 
                  return false;
            
            }
            else mpp[pattern[i]]=words[i];
        }
        
        map<string,char> rev;
        for(int i=0;i<words.size();i++){
            if(rev.find(words[i])!=rev.end()){
                if(rev[words[i]]!=pattern[i]) return false;
            }
                else rev[words[i]]=pattern[i];            
        }
            
        return true;
        
    }
};