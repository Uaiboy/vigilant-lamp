#include <stdio.h>
int main(){
	int mon;
	scanf("%d",&mon);
	switch(mon){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:printf("31");break;
		case 2:printf("28");break;
		case 4:
		case 6:
		case 9:
		case 11:printf("30");
		}
	return 0;
}
