//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
#include <conio.h>

void main(){
    int breath, length, area, perimeter;
    breath= 5;
    length= 10;
    area= breath*length;
    perimeter= 2*(breath+length);
    printf("area= %d \n", area);
    printf("perimenter= %d \n", perimeter);
}