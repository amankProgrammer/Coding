/* Write a program to print number 1 to 100.
print "Fizz" if divisible by 3
print "Buzz" if divisible by 5
print "FizzBuzz" if divisible by 3 and 5. */

#include<stdio.h>
void main(){
    int n = 1;
    while(n<=100){
        if(n%3==0 && n%5==0){
            printf(" FizzBuzz ");
        }
        else if(n%3==0){
            printf(" Fizz ");
        }
        else if(n%5==0){
            printf(" Buzz ");
        }
        else{
            printf("%d ",n);
        }

        n++;
    }
    
}


