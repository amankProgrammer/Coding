// Write a program to find the roots of a quadratic equations using switch/match case.

#include<stdio.h>
#include<math.h>

void main(){

    int a,b,c,d;

    printf("Enter the coefficient of quadratic values : ");
    printf("value of a = ");
    scanf("%d",&a);
    printf("value of b = ");
    scanf("%d",&b);
    printf("value of c = ");
    scanf("%d",&c);

     d = (b*b) - (4*a*c);
    int r1 = (-b + sqrt(d))/(2*a);
    int r2 = (-b - sqrt(d))/(2*a);
    

    switch(d>0){
        case 1:
        printf("roots are real and distinct.");
        printf("\nfirst root : %d",r1);
        printf("\nsecond root : %d",r2);
        break;

        case 0:
            switch(d<0){

                case 1 :
                printf("roots are imaginary and distinct.");
                break;

                case 0 :
                printf("roots are equal.");
                printf("\nfirst root : %d",r1);
                printf("\nsecond root : %d",r2);
                break;
            }
    }

}
