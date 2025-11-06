//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#define Pi 3.14

int main(){
    float radius, area, circumference;
    printf("Enter the radius: ");
    scanf("%f" , &radius);
    area= (Pi*radius*radius);
    printf("Area= %f \n", area);
    circumference=(2*Pi*radius);
    printf("Circumference= %f", circumference);
return 0;
}