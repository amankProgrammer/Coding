// Write a program to print armstrong number between 1 to n. The value of n asked from the user.

#include<stdio.h>
int power(int x, int y);
int check_Armstrong(int d, int total_digit){
    int sum = 0;
    while(d>0){
        int digit = d % 10;
        sum = sum + power(digit,total_digit);
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

int count_digit(int x){
    int count = 1;
    while(x>0){
        if(x%10!=x){
            count++;
        }else{
            break;
        }
        x = x/10;
    }
    return count;
}
void main(){
    int n,num=1,count=1;
    printf("enter the number : ");
    scanf("%d",&n);
    
    while(count<=n){
        if(check_Armstrong(num,count_digit(num))==num){
            printf(" %d",num);
            count++;
            num++;
        }else{
            num++;
        }
    }
   
}