int isPrime(int t,int num){
    int i;
    for(i=2;i<=t;i++){
        if(i==2){
            return 1;
        }else if(i%2!=0&&i%3!=0||i==3){
            return 1;
        }
    }
}