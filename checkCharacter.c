/* Any character is entered through the keyboard, 
write a program to determine whether the character entered is a capital letter, 
a small case letter, a digit or a special symbol. 

The following shows the range of ASCII values for various characters. 
A – Z                            65-90
a – z                             97-122
0 – 9                             48-57
special symbols         0-47, 58 - 64, 91 - 96, 123 - 127 */

#include<stdio.h>

void main (){
    char c;
    printf("Please enter a single character : ");
    scanf("%c",&c);
    int a = (int)c;

    if(a>64 && a<91)
    {
        printf("The input character is UpperCase.");
    }
    else if(a>96 && a<123) 
    {
        printf("The input character is LowerCase");
    }
    else if(a>47 && a<58)
    {
        printf("The input character is a digit");
    }
    else
    {
        printf("The input character is a special character");
    }

}