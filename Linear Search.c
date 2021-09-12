#include<stdio.h>

int main(){
	int n,a[50],data,i,flag=0;
	printf("Enter the number");
	scanf("%d",&n);
	
	printf("Enter the elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter the data which you want to check:");
	scanf("%d",&data);
	
	for(i=0;i<n;i++){
		if(a[i]==data){
	       flag++;
	    }
	}
	
	if(flag!=0){
		printf("Element is found at %d times",flag);
	}else{
		printf("Element is not found");
	}
}

