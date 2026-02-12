#include<iostream>
using namespace std;
int main(){
    int i,j;
    /*for(i=0;i<5;i++){
        for(j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;*/
    char ch='A';
   for (int i = 1; i <=5; i++) {
        for (int j = i; j >= 1; j--) {
            cout << char(64 + j) << " ";
        }
        cout<<endl;
    }
    return 0;
}