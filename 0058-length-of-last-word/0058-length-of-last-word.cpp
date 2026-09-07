class Solution {
public:
    int lengthOfLastWord(string s) {
        

         stringstream ss(s);
       vector<string> words;
      string word;

      while(ss >> word) {
        words.push_back(word);

}
      string ans=words[words.size()-1];
      return ans.size();

    }
};