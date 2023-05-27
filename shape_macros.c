#include<stdio.h>

#define square_area(side) (side * side)

int main() {
    int side;
    printf("Enter the side of the square: ");
    scanf("%d", &side);
    int area = square_area(side);
    printf("The area of the square is: %d\n", area);
    return 0;
}
