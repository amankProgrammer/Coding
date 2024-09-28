//Write a program to find the factorial of given number.

#include<stdio.h>

void main(){
    int num,fact;
    printf("enter a number :  ");
    scanf("%d",&num);
    fact = num;
    int a = num;
    for(int i = 1; i<a; i++){
        fact = fact * (num-1);
        num-- ;
    }
    printf("factorial %d",fact);
}