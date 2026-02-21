#include<iostream>
#include<vector>
#include<string>
using namespace std;
void printsubset(vector<string> arr,vector<string> &subset,int index){
    if(arr.size()==index){
        for(string i:subset)
        cout<<i<<" ";
        cout<<endl;
        return;
    }
    subset.push_back(arr[index]);
    printsubset(arr,subset,index+1);
    subset.pop_back();
    printsubset(arr,subset,index+1);
}
int main(){
    vector<string> arr = {"c", "a", "r"};

    vector <string> subset;
    int index =0;
    printsubset(arr,subset,index);
    return 0;

}


