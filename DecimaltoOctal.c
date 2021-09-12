#include<stdio.h>
void Convert(int);

void Convert(int n){
	int a[50] ,i,remainder;
	for(i=0;n!=0;i++){
		remainder = n%8 ;
		a[i] = remainder;
		n = n/8;
	}
	
	printf("The octal Value is ");
	for(i=i-1 ;i>=0;i--){
		printf("%d",a[i]);
	}
}



int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	Convert(n);
}
