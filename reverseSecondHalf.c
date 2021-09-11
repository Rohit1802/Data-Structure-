#include<stdio.h>

int main(){
	int a[100] ,n , i, j,temp;
	//Taking the Size from user
	printf("Enter the Size: ");
	scanf("%d",&n);
	
	//Taking the Values from user
	printf("Enter the values..");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	//Showing Existing Values
	printf("The Values are ..");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	//Reversing the first Half Values
    for(i=n/2 ,j=(n-1) ;i<(n*3)/4; i++ ,j--){
    	temp = a[i];
    	a[i] = a[j];
    	a[j] = temp;
	}
	
	//New elements are 
	printf("The new Elements are..");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
