#include<iostream>
#include<vector>
#include<set>
using namespace std;
void unionarr(vector <int> &a,vector <int> & b){
    int n1=a.size();
    int n2=b.size();
    set <int> st;
    for(int i=0;i<n1;i++){
        st.insert(a[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(b[i]);
    }
    vector<int> temp;
    for(auto i:st){
        temp.push_back(i);
    }
    cout<<"{";
    for(int i=0;i<temp.size();i++){
    cout<<temp[i]<<",";
    }
    cout<<"}";


}
int main(){
    vector <int> a={1,2,3,4,5};
    vector <int> b={2,3,7,8};
    unionarr(a,b);
    return 0;
}