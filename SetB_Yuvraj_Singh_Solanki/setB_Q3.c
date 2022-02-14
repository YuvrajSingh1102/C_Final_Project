#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int binaryConversion(int);
int main(){
   
   	int number;
	int n;
   
   	printf("Enter the number: ");
   	scanf("%d",&number);
   	n = binaryConversion(number);
   	printf("Before:%d",n);
   
 
    	int reverse = 0, remainder, d = 0, ld;
    	printf("\nAfter:");
    
	while(n > 0)
    	{
    	remainder = n % 10;
    	if(d == 0)
    	{
    		ld = remainder;
    	}
    	
	if(remainder == 0 && ld ==0 )
	
    		printf("%d",remainder);
    		reverse = reverse * 10 + remainder;
    		n = n / 10;
    		d++;
	
    	}
    	printf("%d",reverse);
	printf("\n");


   return 0;
}

int binaryConversion(int number){
   
	int num = 0, remainder, f = 1;
	
	while(number != 0){
      	remainder = number % 2;
     	num = num + remainder * f;
      	f = f * 10;
      	number = number / 2;
   	}	
   return num;
}
