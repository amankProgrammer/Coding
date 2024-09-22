// If the three sides of a triangle are entered through the keyboard,
//  write a program to check whether the triangle is isosceles, equilateral, scalene or right angled triangle.

#include<stdio.h>

void main(){
    int x,y,z;

    printf("Enter the measurement of the sides of the triangle.");

    printf("\nFirst Side = ");
    scanf("%d",&x);
    printf("Second Side = ");
    scanf("%d",&y);
    printf("Third Side = ");
    scanf("%d",&z);

    if(x==y && y==z){
        printf("Triangle is Equilateral Triangle");
    } else if (x==y || y==z || x==z) {
        printf("Triangle is Isosceles Triangle");
    } else {
        if(x*x == y*y + z*z || y*y == x*x + z*z || z*z == x*x + y*y){
            printf("Triangle is Right Angled Triangle");
        } else {
            printf("Triangle is Scalene Triangle");
        }
    }


}