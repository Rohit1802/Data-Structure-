#include<stdio.h>

int main(){
	int a[100],i,n ,temp;
	
	printf("Enter the Size: ");
	scanf("%d",&n);
	
	printf("Entet the Elements ..");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	
	temp = *(a+1);
	*(a+1) = *(a+4);
	*(a+4) = temp;
	
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
