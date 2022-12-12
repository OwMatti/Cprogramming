//
//  main.c
//  FEXER02
//
//  Created by PROGRAMMING on 28/11/2022.
//  Copyright © 2022 CC-Comprog11. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b, i, Q, R;
    printf("input 1st number:");
    scanf("%d",&a);
    printf("input 2nd number:");
    scanf("%d",&b);
    i=0;
    do {
        a=a-b;
        i++;
        Q=i;
        R=a;
    }while (a>=b);
    printf("The Quotient is: %d",Q);
    printf("\nThe Remainder is: %d",R);
    return 0;
}
