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
    arr[j]=9;
    maxNum+=arr[j]*pow(10,j);
 }
   temp=num;
  i=0;
 while(temp){
    arr[i]=temp%10;
    temp/=10;
    i++;
 }
 int min=arr[i-1];
 int minNum=0;
   for (j=0;j<i;j++){
    if(arr[j]==min)
        arr[j]=0;
    minNum+=arr[j]*pow(10,j);
 }
 return maxNum-minNum;
}