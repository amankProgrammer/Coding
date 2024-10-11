/*
Write a program to compute the sum of the specified number of prime numbers.
For example, when n = 7,
Then Sum = 2+3+5+7+11+13+17 = 58
*/

#include<stdio.h>

void main(){
    int n,sum=0,flag=1;
    printf("Please enter a number : ");
    scanf("%d",&n);
    printf("The sum of top %d prime numbers are : ",n);
    for(int i=2;i<=n*n;i++){
        int count=0;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==0 && flag<n){
            printf(" %d + ",i);
            sum = sum + i;
            flag++ ;
        }else if(count==0 && flag==n){
            sum = sum + i;
            printf("%d = ",i);
            flag++ ;
        }
    }
    printf("%d",sum);
}

