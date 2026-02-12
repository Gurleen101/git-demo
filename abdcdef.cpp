#include<iostream>
using namespace std;
int main()
{
    int i,j;
    char ch='A';
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;

}
