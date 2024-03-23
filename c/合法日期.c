#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int m=1;
  int i=0;
  int d=1;
  int arr[31];
  scanf("%d",&m);
  scanf("%d",&d);
  for(i;i<31;i++){
    arr[i]=i+1;
  }
  if(m>12){
    printf("no");
    return 0;
  }
    switch(m){
      case 1:if(d>32){
        printf("no");
      }
             else printf("yes");
      break;
      case 2:if(d<=28) printf("yes");
             else printf("no");
      break;    
      case 3:if(d>32){
        printf("no");
      }
             else printf("yes");
      break;
      case 4:if(d>31){
        printf("no");
      }
             else printf("yes");
      break;
      case 5:if(d>32){
        printf("no");
      }
             else printf("yes");
      break;
      case 6:if(d>31){
        printf("no");
      }
             else printf("yes");
      break;
      case 7:if(d>32){
        printf("no");
      }
             else printf("yes");
      break;
      case 8:if(d>32){
        printf("no");
      }
             else printf("yes");
      break;
      case 9:if(d>31){
        printf("no");
      }
             else printf("yes");
      break;
      case 10:if(d>31){
        printf("no");
      }
             else printf("yes");
      break;
      case 11:if(d>32){
        printf("no");
      }
             else printf("yes");
      break;
      case 12:if(d>31){
        printf("no");
      }
             else printf("yes");
      break;
    }
      return 0;
  }
