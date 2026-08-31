class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int diff=INT_MAX;;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k=nums.size()-1;
            
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];

                int deviation=abs(target-sum);
                if(deviation<=diff) {
                    ans=sum;
                    diff=deviation;
                    
                }
                if(sum < target)
                    j++;
                else if(sum > target)
                        k--;
                 else
                    return sum;
                


               
            }
        }
        return ans;
        
    }
};