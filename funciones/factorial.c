long factorial(long n){
    int i, f;
    for (i=2; i<=n; i++){
        f = f*i;
    }
    return f;
}



long factorial_r(long n){
    if (n==1 || n==0) return 1;
    else{
        return n*factorial_r(n-1);
    }   
}

