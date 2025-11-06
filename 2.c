//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient

#include <stdio.h>
#include <conio.h>

void main(){
    int i,j,sum,diff,mul,subs;
    i=10;
    j=5;
    sum= i+j;
    diff= i/j;
    mul= i*j;
    subs= i-j;
    printf("sum= %d \n", sum );
    printf("quotient= %d \n", diff);
    printf("product= %d \n", mul);
    printf("difference= %d \n", subs);
}