#include<stdio.h>

void convert(int n){
	int a[50] ,i ,r;
	for(i=0 ; n!=0 ; i++){
		r = n%2;
		a[i] = r;
		n = n/2;
	}
	
	printf("The binary number is ..");
	for(i=i-1 ; i>=0 ;i--){
		printf("%d",a[i]);
	}
}

void main(){
	int n;
	printf("Enter a Number ");
	scanf("%d",&n);
	
	//Covert the number
	convert(n);
}
