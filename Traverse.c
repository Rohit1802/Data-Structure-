#include<stdio.h>

int main(){
	int a[50] ,n ,i;
	
	printf("Enter the Elements:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Elements are ...");
	for(i=0;i<n;i++){
	    printf("%d ",a[i]);	
	}
}
