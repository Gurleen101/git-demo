#include<iostream>
using namespace std;
int recur(int n){
    if(n==0) return 0;
    if(n%2==0) return recur(n-1)+n;
    else return recur(n-1);
}
int main(){
    cout<< recur(6);
}