#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a,b,t;
  scanf("%d\r%d\r%d",&a,&b,&t);
  int i=0,n=0,min=0;
  if(t>=60){
    i=t/60;

  }
    n=t-60*i;
    if(n+b>60){
    min=n+b-60;
    i++;
    }
    else min=n+b;
  printf("%d\n%d",a+i,min);
  return 0;
}
