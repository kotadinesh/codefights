bool evenDigitsOnly(int n) {
    int a,flag=0,x;
    while(n>0){
        x=n%10;
        n=n/10;
        if(x%2!=0)
            return false;
    }
        return true;   
}