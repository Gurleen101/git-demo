#include<iostream>
#include<vector>
using namespace std;
int missing(vector<int> &nums){
    int n=nums.size();
    int i=0;
    while(i<n){
        if(nums[i]==i+1){
            i++;
        }
        else{
            return i+1;
        }
    }
}
int main(){
    vector <int> nums={1,2,4,5};
    cout<<missing(nums);
    return 0;
}