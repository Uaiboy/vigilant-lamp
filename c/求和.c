#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  // 请在此输入您的代码
  int arr[4];
  int i=0;
  int sum=0;
  for(i=1;i<2020;i++){//把1234 拆成1，2，3，4 然后赋值给数组
    arr[0]=i/1000%10;
    arr[1]=i/100%10;
    arr[2]=i/10%10;
    arr[3]=i%10;
    //检查数组的数字是否与特别数字相等
    if(arr[0]==2 || arr[0]==1 ) {sum+=i;continue;}
    if((arr[1]==0 && i>1000) || arr[1]==2 || arr[1]==9 || arr[1]==1) {sum+=i;continue;}
    if((arr[2]==0 && i>100) || arr[2]==2 || arr[2]==9 || arr[2]==1) {sum+=i;continue;}
    if((arr[3]==0 && i>10) || arr[3]==2 || arr[3]==9 || arr[3]==1) {sum+=i;continue;}
  }
  printf("%d",sum);
  return 0;
}
