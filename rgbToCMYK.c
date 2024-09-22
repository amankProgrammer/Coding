/** In digital world colors are specified in Red-Green-Blue (RGB) format, with values of R, G, B varying on an integer scale from 0 to 255. 
In print publishing the colors are mention Cyan-Magenta-Yellow-Black (CMYK) format,
with values of C, M, Y, and K varying on a real scale from 0.0 to 1.0.
Write a program that converts RGB color to CMYK color as per the following formulae:
White = Max(Red/255, Green/255, Blue/255)
Cyan = (White - Red / 255)/ White
Magenta = (White - Green/255)/White
Yellow = (White - Blue/255)/White
Black = 1- White

If the RGB values are all 0, then the CMY values are all 0 and the K value is 1. **/

#include<stdio.h>

double max(double R,double G, double B){
    if(R>G && R>B){
        return R;
    } else if (G>R && G>B){
        return G;
    } else {
        return B;
    }
}
int main(){
    double r,g,b,R,G,B,w,c,m,y,k;
    printf("Enter RGB values, with values of R, G, B varying on an integer scale from 0 to 255.");
                                        
    printf("\nvalue of R : ");
    scanf("%lf",&r);
    printf("value of G : ");
    scanf("%lf",&g);
    printf("value of B : ");
    scanf("%lf",&b);


    if(r>255 || r<0||g>255 || g<0||b>255 || b<0 ){
        printf("Invalid Values of RGB");
        return 0;
    } else {
        if(r==0 && g==0 && b==0){
            c = 0;
            m = 0;
            y = 0;
            k = 1;

            printf("CMYK value are %lf, %lf, %lf, %lf",c,m,y,k);
            return 0;
        } else {

            double R = r/255;
            double G = g/255;
            double B = b/255;
            w = max(R,G,B);
            c = (w-R)/w;
            m = (w-G)/w;
            y = (w-B)/w;
            k = 1 - w;

            printf("\nC M Y K value are  %.2lf, %.2lf, %.2lf, %.2lf",c,m,y,k);
            return 0;
        }
    }
}

