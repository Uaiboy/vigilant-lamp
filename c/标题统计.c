#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
  // 请在此输入您的代码
  char arr[100];
  int i=0;
  int count=0;
  gets(arr);
  for(i;i<strlen(arr);i++){
    if(arr[i]!=0) count++;
    if(arr[i]==32){
      count--;
    }
  }
  printf("%d",count);
  return 0;
}
