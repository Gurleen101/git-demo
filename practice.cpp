rec(n){
    if(n==1) return 1;
    else{
        rec(n-1);
        for(int i=0;i<n;i++) cout<<"hello";
    }
}
 