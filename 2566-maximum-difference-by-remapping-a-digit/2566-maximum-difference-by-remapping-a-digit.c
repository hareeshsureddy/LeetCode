int minMaxDifference(int num) {
/*
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
 } */
  int temp=num;
  char *s=(char*)malloc(10*sizeof(char));
  sprintf(s, "%d", num);;
  int len=strlen(s);
 /*while(temp){
    temp/=10;
    len++;
 }*/
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
  int min=num/pow(10,len-1);
 int minNum=0;
   for (j=0;j<len;j++){
    k=num%10;
    if(k!=min)
    minNum+=k*pow(10,j);
    num=num/10;
 }
 return maxNum-minNum;
}