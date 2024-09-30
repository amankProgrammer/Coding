/* 
Write a program to check the given number is strong or not?
A strong number is a number where the sum of the factorials of each digit is equal to the original number. 
For example, 145 is a strong number because 1! + 4! + 5! = 1 + 24 + 120 = 145. 
*/

#include<stdio.h>
int factorial(int digit);
int check_strong(int d){
    int sum = 0;
    while(d>0){
        int digit = d % 10;
        sum = sum + factorial(digit);
        d = d/10;
    }
    return sum; 
}

int factorial(int dig){
    int p = 1;
    for (int i=dig;i>=1;i--){
        p = p * i;
    } 
    return p;
}

void main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    if(check_strong(n)==n){
        printf("The Number you entered %d is a Strong Number.",n);
    }
    else
    {
        printf("Not A Strong Number.");
    } 
}