#include <stdio.h>

int main() {
    int num;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is even or odd
    if (num % 2 == 0) 
    {
        printf("%d is even.\n", num)
    }
    else
    {
	    printf("It is an odd number")
    }
    return 0;
}
