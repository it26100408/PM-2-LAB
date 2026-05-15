#include <stdio.h>

      int main(){
              float perimeter, length,width;

              // Get input from user
              printf("Enter the perimeter of the fence: ");
              scanf("%f", &perimeter);

              // Calculate dimensions
              //Formula: P = 2(L + 0.75L) -> P = 3.5L
              length = perimeter / 3.5;
              width = 0.75 * length;

              // Display results
              printf("Length of the fence: %.2f\n", length);
              printf("Width of the fence: %.2f\n", width);
 
              return 0;
}
