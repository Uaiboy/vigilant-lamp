#include <stdio.h>
int main(){
	int i=0,n=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	for(i=0;i<n-1;i++){
		if(arr[i]>arr[i+1]){
			if(max<arr[i]-arr[i+1]){
				max=arr[i]-arr[i+1];
			}
		}
		else {
			if (max<arr[i+1]-arr[i]){
				max=arr[i+1]-arr[i];
			} 
		}
	}
	printf("%d",max);
	return 0;
}
