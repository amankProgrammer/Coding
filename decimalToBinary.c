#include<stdio.h>
#include<string.h>

void main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int bin [100];
    int i = 0;
    while(n>0){
        bin[i] = n%2;
        n = n/2 ;
        i++;
    }
    for(int j = i-1;j>=0;j--){
        printf("%d",bin[j]);
    }

}