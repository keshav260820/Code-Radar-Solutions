int isPrime(int num){
  if(num<2)return 0;
  int i;
  for(i=2;i*i<=num;i++){
    if(num%1==0)return 0;
  }  return 1;
    
    
}