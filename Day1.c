/* A five digit number is entered through the keyboard.
Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not. */

#include<stdio.h>
void main(){
    int num, rem;
    int rev = 0;
    printf( "please enter five digit number : ");
    scanf("%d",&num);
    int x = num;
    while (num!=0)
    {
        rem = num % 10;
        rev = rev*10 + rem;
        num = num/10;
    }

    printf("%d",rev);

    if (rev == x)
    {
        printf("\nReverse and the original number both are equal");
    } else
    {
        printf("\nReverse and the original number are not equal");
    }
}