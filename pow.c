#include<stdio.h>
#include<math.h>

int check_Armstrong(int d, int total_digit){
    int sum = 0;
    while(d>0){
        int digit = d % 10;
        sum = sum + pow(digit,total_digit);
        d = d/10;
    }
    return sum;
     
}

int power(int x,int y){
    int p = 1;
    for (int i=1;i<=y;i++){
        p = p * x;
    }
    return p;
}

void main(){
    int n = power(11,2);
    printf("%d",n);
}

