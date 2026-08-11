class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
       set<int> S;
        for(int num:nums){
           S.insert(num);

        }
        int count=1;
        int ans=1;
        for(int i=0;i<S.size();i++){
            if(S[i+1]==S[i]) count++;
            else {
                ans=max(count,ans);
                count=1;
            }
        }
        return ans;
        
    }
};
