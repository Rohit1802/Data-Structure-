#include<stdio.h>

int main(){
	int a[50],i,n,temp;
	printf("Enter the Size: ");
	scanf("%d",&n);
	
	printf("Enter the elements are ..");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i+=2){
		temp = a[i];
		a[i] = a[i+1];
		a[i+1] = temp;
	}
	
	printf("Elements are .. ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
