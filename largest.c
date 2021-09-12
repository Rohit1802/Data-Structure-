#include<stdio.h>

int main(){
	int a[50] ,i, n;
	printf("Enter the size: ");
	scanf("%d",&n);
	
	printf("Enter the elements :");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<n;i++){
		if( a[0] < a[i]){
			a[0] = a[i];
		}
	}
	
	printf("Largest element is %d", a[0]);
}
