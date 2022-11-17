#include<stdio.h>  

int main()
{   
// int a=10, b=20;      
// printf("Before swap a=%d b=%d",a,b);      
// a=a+b;   
// b=a-b;    
// a=a-b;   
// printf("\nAfter swap a=%d b=%d",a,b);    

// int a=10, b=20;      
// printf("Before swap a=%d \t b=%d",a,b);       
// a=a*b;   
// b=a/b;   
// a=a/b;    
// printf("\n After swap a=%d \t b=%d",a,b);   

int a=10, b=20; 
 printf("Before swap a=%d b=%d",a,b);
a = a ^ b;
b = a ^ b;
a = a ^ b;
printf("\nAfter swap a=%d b=%d",a,b);

return 0;  
}   