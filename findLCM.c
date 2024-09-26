#include<stdio.h>
#include<math.h>

void main(){
    int a,b,LCM;
    printf("please enter the numbers : ");
    printf("\nFirst number : ");
    scanf("%d",&a);     
    printf("Second numbers : ");
    scanf("%d",&b);     

    
    int max = (a>b)?a:b;
    int min = (a<b)?a:b;

    LCM = max;
    int i = 2;
    while(max%min!=0){
        max = max * i;
        LCM = max;
        i++;
    }
    printf("LCM is %d",LCM);
    
}