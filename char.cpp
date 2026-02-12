#include<iostream>
using namespace std;
int main()
{
    cout<<"enter a character\n";
    char ch;
    cin>>ch;
    if(ch>=97 && ch<=122){
        cout<<"character is lower case\n";
    }
    else if(ch>=65 && ch<=90){
        cout<< "character is upper case\n";
    }
    else{
        cout<<"invalid output";
    }
    return 0;
}