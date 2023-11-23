#include <stdio.h>

int main() {
    int i, j;

    printf("Questã03\n");

    for (i = 1; i < 201; i++) {
        printf("0.06 * %d = %.2f\t", i, 0.06 * i);
      if (i%10== 0) {
          printf ("\n");
     }   // Print a new line after every 10 iterations
    }
        
        if ((i - 1) % 10 != 0) {
            printf("\n");
        }

    return 0;
}