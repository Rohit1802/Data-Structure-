#include<stdio.h>

int main(){
	int a[50] , i, n ,pos ,value;
	
	// Enter the Size
	printf("Enter the Size of array:");
	scanf("%d",&n);
	
	// Taken values form User.
	printf("Enter the values ..");
	for(i=0; i<n ;i++){
		scanf("%d",&a[i]);
	}
	
	// Existing Array.
	printf("Enter the Values Existing Array ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	// Position where you want to insert
	printf("Enter the position where you want to insert: ");
	scanf("%d",&pos);
	
	// Enter the value 
	printf("Enter the Value :");
	scanf("%d",&value);
	
	for(i=n-1 ;i>=pos-1 ;i--){
		a[i+1] = a[i];
	}
	a[pos-1] = value;
	n++;
	
	// New Array Values
	for(i=0 ;i<n ;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
