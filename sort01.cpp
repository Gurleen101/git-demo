#include<iostream>
#include<vector>
using  namespace std;
void sortArray(vector <int> &nums){
    int n= nums.size();
    int low=0, mid=0, high=n-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            mid++;
            low++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }

}
int main(){
    vector <int> nums={0,2,2,2,2,0,1,0,1,0,1,0,2};
    sortArray(nums);
    for(int i=0;i<nums.size();i++){
       cout<<nums[i]<<" ";
    }
    return 0;
}