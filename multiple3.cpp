#include<iostream>
using namespace std;
int main(){
    int i, n,sum=0;
    cout<<"enter number";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%3==0){
            sum=sum+i;
        }

    }
    cout<<"the sum of all numbers till " << n << " which are divisible by 3 is "<<sum;
    return 0;
}