int maxDiff(int num) {
      int temp=num;
      int len=0;
 // char *s=(char*)malloc(10*sizeof(char));
 // sprintf(s, "%d", num);;
 // len=strlen(s);
 while(temp){
    temp/=10;
    len++;
 }
 if(len==1) return 8;
 temp=num;
 int max=0;
 int i=len-1;
    int j=0;
    int k=0;
 while (temp){
     j=pow(10,i--);
     k=temp/j;
    if(k!=9){
    max=k;
    break;
    }
    temp=temp%j;
 }
 temp=num;
  int maxNum=0;
  for (j=0;j<len;j++){
    k=temp%10;
    if(k==max)
    maxNum+=9*pow(10,j);
    else
    maxNum+=k*pow(10,j);
    temp/=10;
 }
 temp=num;
  bool leadingZero=false;
 int min=num/pow(10,len-1);
if(min==1) leadingZero=true;
min=0;
  i=len-1;
  while (temp){
     j=pow(10,i--);
     k=temp/j;
     if(leadingZero){
    if(k!=1 & k!=0){
    min=k;
    break;
    }
    }else if(k!=0){
    min=k;
    break;
    }
    temp=temp%j;
 }
 if (min==0) return maxNum-num;
/*  int min=num/pow(10,len-1);
  bool leadingOne=false;
  if(min==1){
    min=num/pow(10,len-2);
    min=min%10;
    leadingOne=true;
  }
  */
 int minNum=0,MinNum=0;
 temp=num;
   for (j=0;j<len;j++){
    k=temp%10;
    if(k!=min){
    minNum+=k*pow(10,j);
    }
    else if(!leadingZero)
    minNum+=1*pow(10,j);

    MinNum+=1*pow(10,j);
    temp=temp/10;
 }
 if (minNum==0 ) return maxNum-MinNum;
 return maxNum-minNum;
}

/*
int minMaxDifference(int num) {
 int arr[9]={-1};
 int temp=num;
 int i=0;
 while(temp){
    arr[i]=temp%10;
    temp/=10;
    i++;
 }
 int max=0;
 int j=i-1;
 for (;j>=0;j--){
    if(arr[j]!=9){
    max=arr[j];
    break;
    }
 }
 int maxNum=0;
  for (j=0;j<i;j++){
    if(arr[j]==max)
    maxNum+=9*pow(10,j);
    else
    maxNum+=arr[j]*pow(10,j);
 }
 int min=arr[i-1];
 int minNum=0;
   for (j=0;j<i;j++){
    if(arr[j]!=min)
    minNum+=arr[j]*pow(10,j);
 }
 return maxNum-minNum;
} */