//
//  main.c
//  SW#1
//
//  Created by PROGRAMMING on 28/11/2022.
//  Copyright © 2022 CC-Comprog11. All rights reserved.
//

#include <stdio.h>

int main() {
    int N,sum=0;
    N=2;
    do {
        printf("\n%d",N);
        sum = sum + N;
        N+=2;
    }while (N<=100);
    printf("\nthe sum of the first 50 even number is: %d",sum);
    
    return 0;
}
