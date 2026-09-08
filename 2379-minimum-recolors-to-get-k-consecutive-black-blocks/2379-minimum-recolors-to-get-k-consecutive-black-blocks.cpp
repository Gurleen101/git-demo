class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int count=0;
       
        for(int i=0;i<k;i++){
            if(blocks[i]=='W')  count++;
        }
         int minCount=count;
        int i=0;
        int j=k;
        while(j<blocks.size()){
            if(blocks[i]=='W') count--;
            if(blocks[j]=='W') count++;
            minCount=min(count, minCount);
            i++;
            j++;
        }
         return minCount;
        
        
    }
};