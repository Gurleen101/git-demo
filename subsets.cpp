#include<iostream>
#include<vector>
using namespace std;
void printsubset(vector<int> &arr,vector<int> &subset,int index){
    if(arr.size()==index){
        for(int i:subset)
        cout<<i<<",";
        cout<<endl;
        return;
    }
    subset.push_back(arr[index]);
    printsubset(arr,subset,index+1);
    subset.pop_back();
    printsubset(arr,subset,index+1);
}
int main(){
    vector<int> arr = {1,2,3};

    vector <int> subset;
    int index =0;
    printsubset(arr,subset,index);
    return 0;

}


