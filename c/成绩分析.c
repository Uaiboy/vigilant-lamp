#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

  long n=0;
  int i=0;
  int max=0;
  int min=100;
  int arr[1000];
  float average;
  scanf("%ld",&n);
  for(i;i<n;i++){
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++){
    if (max<arr[i]){max=arr[i];}
    if (min>arr[i]){min=arr[i];}
    average+=arr[i];
  }
  average=average/n;
  printf("%d\n",max);
  printf("%d\n",min);
  printf("%.2f\n",average);
  // 请在此输入您的代码
  return 0;
}
