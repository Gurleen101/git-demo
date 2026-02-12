#include<iostream>
using namespace std;
int main(){
    int i,j,k,l;
    for(i=0;i<4;i++){
        for(j=3;j>i;j--){
            cout<<" ";
        }
            for(k=0;k<=i;k++){
                cout<<k+1;
            }
            for(l=i;l>0;l--){
                cout<<l;
            }
            
        
        cout<<endl;


    }
    return 0;
}