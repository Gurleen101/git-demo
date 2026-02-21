#include<iostream>
#include<vector>
using namespace std;
void printsubset(vector<int> &arr,vector<int> &subset,int index,int sum){
    
    if(arr.size()==index){
        
        if(sum==4){
        for(int i:subset)
        cout<<i<<" ";
        
        
        }
        cout<<endl;
        return;
    }
    
    subset.push_back(arr[index]);
    printsubset(arr,subset,index+1,sum+arr[index]);
    subset.pop_back();
    printsubset(arr,subset,index+1,sum);
}
int main(){
    vector<int> arr = {1,2,1};
    int sum=0;
    vector <int> subset;
    int index =0;
    printsubset(arr,subset,index,sum);
    return 0;

}


