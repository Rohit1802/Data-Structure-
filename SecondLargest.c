#include<stdio.h>
#include<limits.h>

int main(){
	int a[50],n,i,l1,l2;
	printf("Enter the Size:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	l1 = INT_MIN;
	l2 = INT_MIN;
	
    for(i=0;i<n;i++){
    	if(a[i] > l1){
    		l2 = l1;
    		l1 = a[i];
		}else if(a[i]>l2 && l1<l2){
			l2 = a[i];
		}
	}
	
	printf("Second largest element is %d",l2);
}
