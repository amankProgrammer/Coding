/* Write a program to check the entered number is positive, negative or zero using switch/match case. */

#include<stdio.h>

void main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    switch(num>0){
        case 1:
        printf("Number is positive");
        break;

        case 0:
            switch(num<0){
                case 1 :
                printf("Number is negative");
                break;
                case 0 :
                printf("Number is zero");
                break;
            }
    }
}