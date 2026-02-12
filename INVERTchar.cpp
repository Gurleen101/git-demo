#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    char ch='A';
    for(i=0;i<4;i++){
        for(j=0;j<i;j++){
            cout<<" ";
        }
        for(k=4;k>i;k--){
            cout<<ch;

        }
        cout<<endl;
        ch++;
    }
    return 0;
}
/*OUTPUT
AAAA
 BBB
  CC
   D
   */