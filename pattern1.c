/*
11111 
10001 
10001 
10001 
11111
print above pattern? The value of row ask from the user? */

#include<stdio.h>
void main(){
    int n;
    printf("Enter the number of row = ");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(i==1 || j==1 || i==n || j==n){
                printf(" %c ",'1');
            }
            else{
                printf(" %c ",'0');
            }
        }
        printf("\n");
    }
}

