class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        if(nums.size()%2!=0) return false;
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.second>2) return false;
        }
        return true;

        
    }
};