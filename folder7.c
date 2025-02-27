#include<stdio.h>

int main()

{
    int Length, Breadth, Perimeter, Area;
    printf("Enter the value of Length :");
    scanf("%d", &Length);
    printf("Enter the value of Breadth :");
    scanf("%d", &Breadth);
    Perimeter=2 * (Length + Breadth);
    printf("The perimeter of the rectangle is :%d\n ", Perimeter);
    Area=(Length * Breadth);
    printf("The area of the rectangle is :%d\n", Area);
    
    return 0;
    
    
    
}
