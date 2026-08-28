class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxB=piles[0];
        for(int i=1;i<piles.size();i++){
            maxB=max(maxB,piles[i]);
            }
        int left=1;
        int right=maxB;
        while(left<=right){
            int mid=left+(right-left)/2;
            long long time=0;
            for(int i=0;i<piles.size();i++){
                if(piles[i]<=mid) time++;
                else time+=(piles[i]+mid-1)/mid;
            }
            if(time>h) left=mid+1;
            else right=mid-1;
        }
        return left;
        
    }
};