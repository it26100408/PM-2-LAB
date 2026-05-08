
#include <stdio.h>

int main() {
    float height1, height2, height3, average, total, missing1, missing2;
    
    printf("Enter the heights of three known people: ");
    scanf("%f %f %f", &height1, &height2, &height3);

    printf("Enter the average height: ");
    scanf("%f", &average);

    total = average * 5;
    
    missing1 = (total - (height1 + height2 + height3))/2;
    missing2 = missing1;

    printf("\nMissing height 1 = %.2f", missing1);
    printf("\nMissing height 2 = %.2f", missing2);

    return 0;
}


