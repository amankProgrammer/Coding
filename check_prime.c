// Write a program to check that given number is prime or not.

#include<stdio.h>
#include<math.h>

void main(){
    int num,count=0;
    printf("enter the number you want to check wheather its prime or not : ");
    scanf("%d",&num);

    for(int i = 2; i<=sqrt(num);i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==0){
        printf("The number %d is a prime number",num);
    }else{
        printf("The number %d is not a prime",num);
    }
}