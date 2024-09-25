// Write a program to print all natural number 1 to n using while loop.

#include<stdio.h>

void main(){
    int num;
    printf("how many natural number you want to print, enter value : ");
    scanf("%d",&num);
    int i = 1;
    while(i<=num){
        printf("\n%d",i);
        i++;
    }
}
