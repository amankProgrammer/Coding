// Write a program to print  Fibonacci series 1 to n.

#include<stdio.h>
#include<math.h>

void fibbonaci(int n , int a , int b){
    int count=1;
    int sum = a+b;
    while(count<=n-2){ 
        a=b;
        b=sum;
        printf(" %d",sum);
        sum = a + b;
        count++;
    }
}
void main(){
    int n,a=0,b=1;
    printf("enter a number : ");
    scanf("%d",&n);
    printf(" %d",a);
    printf(" %d",b);
    fibbonaci(n,a,b);
}