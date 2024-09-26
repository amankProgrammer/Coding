// Write a program to find the HCF of two numbers. The numbers ask from the number.

#include<stdio.h>
#include<math.h>

void main(){
    int a,b;
    printf("please enter the numbers : ");
    printf("\nFirst number : ");
    scanf("%d",&a);     
    printf("Second numbers : ");
    scanf("%d",&b);     

    int hcf = 1;

    int min =  (a<b)?a:b;
    for(int i=1; i<=min; i++){
        if(a%i==0 && b%i==0){
            hcf = i;
        }
    }
    printf("HCF is %d",hcf);

}