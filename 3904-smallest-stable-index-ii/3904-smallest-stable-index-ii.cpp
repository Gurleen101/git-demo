class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
         int maxN=INT_MIN;
        vector <int> first;
        for(int i=0;i<nums.size();i++){
            maxN=max(maxN,nums[i]);
            first.push_back(maxN);
        }
         int minN=INT_MAX;
        vector <int> second(nums.size());
        for(int i=nums.size()-1;i>=0;i--){
            minN=min(minN,nums[i]);
            second[i]=minN;
        }
        
        for(int i=0;i<nums.size();i++){
           int score=first[i]-second[i];
           
           if(score<=k) return i;
        }
        return -1;
        
    }
};