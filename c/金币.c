#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  // ���ڴ��������Ĵ���
  int k=0;
  scanf("%d",&k);
  int i=0;
  int j=1;//�յ��Ľ��
  int n=1;//��j����ҵ���
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
