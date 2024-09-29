// Write a program to print the sum of all even numbers and odd number range of 1 to n. Value of n ask from the user.

#include<stdio.h>

void main(){
    int n,sumEven=0,sumOdd=0;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sumEven = sumEven + i;
        }else{
            sumOdd = sumOdd + i;
        }
    }
    printf("sum of all even numbers from 1 to %d is : %d",n,sumEven);
    printf("\nsum of all odd numbers from 1 to %d is : %d",n,sumOdd);
}