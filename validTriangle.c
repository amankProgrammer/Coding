// Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered through the keyboard. 
//  A triangle is valid if the sum of all the three angles is equal to 180 degrees.

#include<stdio.h>

void main(){
    int x, y, z;

    printf("enter value of first angle = ");
    scanf("%d",&x);

    printf("enter value of second angle = ");
    scanf("%d",&y);

    printf("enter value of third angle = ");
    scanf("%d",&z);

    int sum = x + y + z;
    
    if (sum==180)
    {
        printf("\nTriangle is valid");
    }else
    {
        printf("\nTriangle is not valid");
    }
    
}