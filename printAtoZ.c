// Write a program to print all alphabet a to z also A to Z using while loop.

#include<stdio.h>
void main(){
    char small_alphabet,capital_alphabet;
    small_alphabet = 'a';
    capital_alphabet = 'A';

    while(small_alphabet<='z'){
        printf("%c ",small_alphabet);
        small_alphabet++;
    }

    printf("\n");
    
    while(capital_alphabet<='Z'){
        printf("%c ",capital_alphabet);
        capital_alphabet++;
    }

}
