#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter a number";
    cin>>n;
    for(int i=0;i<=n;i++){
        sum=sum+i;

    }
    cout<<"the sum of all numbers upto "<< n<<" is "<< sum;
    return 0;

}