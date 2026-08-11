
#include<bits/stdc++.h>
using namespace std;
int GCD(int &num1, int &num2){
    int gcd=1;
    int n= min(num1,num2);
    for(int i=1;i=<n;i++){
        if(num1%i==0 && num2%i==0){
           gcd=i;
        }

  
    
    }
      return gcd;

}
int main(){

}