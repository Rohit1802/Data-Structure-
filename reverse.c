#include<stdio.h>

int main(){
	int a[50] ,n ,i ,temp ,j;
	printf("Enter the size ");
	scanf("%d", &n);
	
	printf("Enter the elements :");
	for(i=0 ;i<n ;i++){
		scanf("%d", &a[i]);
	}
	
	printf("The Existing elements are ..");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	for(i=0 , j=n-1 ; i < n/2 ; i++ , j--){
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	
	printf("The new Elements are ..");
	for(i=0;i<n;i++){
		printf("%d " ,a[i]);
	}
}
