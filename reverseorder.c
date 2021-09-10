#include<stdio.h>

int main(){
	int a[50], i ,n;
	
    //	Taken the Size from User
	printf("Enter the Elements:");
	scanf("%d",&n);
	
	//  Taken the values from User
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	//Existing List
	printf("The Existing List:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	//New List
	printf("\n");
	printf("The New List: ");
	for(i=n-1 ; i>=0 ;i--){
		printf("%d ",a[i]);
	}
}
