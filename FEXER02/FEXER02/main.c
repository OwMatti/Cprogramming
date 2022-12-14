#include <stdio.h>

int main() {
    
    int a, b;
    printf("Enter two positive integers:");
    scanf("%d %d", &a, &b);
    
    if (b > 0){
        int q = 0;
        int r = a;
        while (r >= b) {
         r-= b;
         q++; 
        }

    printf("Quotient: %d\n", q);
    printf("Remainder: %d\n", r);
  } 

  return 0;
}


