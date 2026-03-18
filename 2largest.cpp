#include<iostream>
using namespace std;
int seclargest(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
    int max2=-1;
     for(int i=0;i<n;i++){
    
    if(arr[i]>max2 && arr[i]!=max){
        max2=arr[i];
    }
}
return max2;

}
int main(){
   int arr[6]={1,5,2,8,6,7};
   cout<<seclargest(arr,6);
   
}
