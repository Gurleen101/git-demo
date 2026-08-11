#include<iostream>
#include<vector>
using namespace std;
int missingNum(vector <int> &nums){
    int n=nums.size();
   
    for(int i=0; i<=n;i++){
         int found=-1;
        for(int j=0;j<n;j++){
            if(nums[j]==i)
            
            found=0;
        }
         if(found==-1)
        return i;
        
    }
   
        
            return -1; 
         
    
}
int main(){
    vector <int> nums={0,1,2,3,5,6,7};
    cout<<missingNum(nums);
    
    return 0;
}
