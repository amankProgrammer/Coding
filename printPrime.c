// Write a program to print all prime number 1 to n. Value of n ask from the user.

#include<stdio.h>
#include<math.h>

void main(){
    int n;
    printf("Please enter a number : ");
    scanf("%d",&n);
    printf("The prime numbers from 1 to %d are : ",n);
    for(int i = 2; i <= n; i++){
        int count=0;
        for(int j = 2;j<=sqrt(i);j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==0){
            printf(" %d",i);
        }
    }
    
}