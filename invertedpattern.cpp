#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    for(i=0;i<4;i++){
        for(j=0;j<i;j++){
            cout<<" ";
        }
        for(k=4;k>i;k--){
            cout<<i+1;

        }
        cout<<endl;
    }
    return 0;
}
/*OUTPUT
1111
 222
  33
   4
   */