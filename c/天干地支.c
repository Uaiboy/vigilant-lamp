#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  // 请在此输入您的代码
  int year=0;
  scanf("%d",&year);
  int i=7;//表示天干
  int j=9;//表示地支
  int n=0;
  char *arr1[]={"jia","yi","bing","ding","wu","ji","geng","xin","ren","gui"};//天干
  char *arr2[]={"zi","chou","yin","mao","chen","si","wu","wei","shen","you","xu","hai"};//地支
  for(n=1;n<=year;n++){
    i++;
    j++;
    if(i==11) i=1;
    if(j==13) j=1;
  }
  printf("%s%s",arr1[i-1],arr2[j-1]);
  return 0;
}
