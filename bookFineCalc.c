/* 
A library charges a fine for every book returned late. 
For first 5 days the fine is 50 paise, 
for 6-10 days fine is one rupee and above 10 days fine is 5 rupees. 
If you return the book after 30 days your membership will be cancelled. 

Write a program to accept the number of days the member is late to return the book and display the fine or the appropriate message. */

#include<stdio.h>

void main(){
    int days;

    printf("Enter the number of days of late submission of book : ");
    scanf("%d",&days);
    
    if(days<=5){
        printf("You have to pay a fine of 50 paise.");
    }else if(days>5 && days<11){
        printf("You have to pay fine of 5 rupees.");
    }else if(days>30) {
        printf("Due to late submission of book your membership was canceled.");
    }
}