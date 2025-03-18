void isPrime(){
    int i;
    for(i=2;i<=num;i++){
        if(i==2){
            print("%d",i);
        }else if(i%2!=0&&i%3!=0||i==3){
            printf("%d",i);
        }
    }
}