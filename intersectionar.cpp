#include<iostream>
#include<vector>
using namespace std;
void interarr(vector <int> & nums1,vector <int>& nums2){
    int n1=nums1.size();
    int n2=nums2.size();
    int i=0;
    int j=0;
    vector <int> temp;
    while(i<n1 && j<n2){
    if(nums1[i]==nums2[j]){
        temp.push_back(nums1[i]);
        i++;
        j++;

    }
    else if(nums1[i]<nums2[j]){
        i++;

    }
    else if(nums2[j]<nums1[i]){
        j++;
    }
}
    for(int k:temp){
        cout<<k<<" ";
    }

}
int main(){
    vector <int> nums1={4,4};
    vector <int> nums2={4,};
    interarr(nums1,nums2);
    return 0;
}