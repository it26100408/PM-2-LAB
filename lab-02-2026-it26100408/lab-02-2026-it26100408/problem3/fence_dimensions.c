#include <stdio.h>

      int main(){
              float perimeter, length,width;
            
              printf("Enter the perimeter of the fence: ");
              scanf("%f", &perimeter);
            
              //Formula: P = 2(L + 0.75L) -> P = 3.5L
              length = perimeter / 3.5;
              width = 0.75 * length;
            
              printf("Length of the fence: %.2f\n", length);
              printf("Width of the fence: %.2f\n", width);
 
              return 0;
}
