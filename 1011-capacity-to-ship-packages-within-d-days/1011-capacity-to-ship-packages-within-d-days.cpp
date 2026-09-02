class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
       int m=0;
        int n=INT_MIN;
        for(int i=0;i<weights.size();i++){
            m+=weights[i];
            n=max(weights[i],n);
        }
        
        while(n<m){
            int mid=n+(m-n)/2;
            int time=1;
            int carry=0;
            for(int i=0;i<weights.size();i++){
                if(carry+weights[i]<=mid) {
                    carry+=weights[i];
                    
                    }
                else {
                    time++;
                    carry=weights[i];
                    
                }
            }
           
             if(time <=days) m=mid;
            else n=mid+1;
            

        }
        
         return n;
    }
};