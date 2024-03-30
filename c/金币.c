#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  // 请在此输入您的代码
  int k=0;
  scanf("%d",&k);
  int i=0;
  int j=1;//收到的金币
  int n=1;//收j个金币的天
  double sum=0;
  for(i=1;i<=k;n++){
    sum+=j*n;
    j++;
    if(k<n+i){
      sum+=j*(k-i);
      break;
    }
    i+=n;
  }
  printf("%ld",sum);
  return 0;
}
