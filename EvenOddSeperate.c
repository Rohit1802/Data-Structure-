#include<stdio.h>

int main(){
	int a[50] ,b[50],c[50], n ,count,i ,j,k;
	printf("Enter numbers :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("The elements are ..");
	for(i=0 ;i<n ;i++){
		printf("%d ",a[i]);
	}
	
    for(i=0;i<n;i++){
    	if((a[i]%2)==0){
    		b[j] = a[i];
    	    j++;
		}else{
			c[k]= a[i];
			k++;
		}
	}
	
	printf("\nElements are..")
	for(i=0; i<j; i++){
		printf("%d ",b[i]);
	}

	for(i=0; i<k; i++){
		printf("%d ",c[i]);
	}
	
}



